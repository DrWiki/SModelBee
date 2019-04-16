#include "MyOldOpenGLWidget.h"

MyOldOpenGLWidget::MyOldOpenGLWidget(QWidget *parent) :
    QGLWidget(parent){
    setMinimumHeight(50);
    setMinimumWidth(50);
    model = new Model3D(this);
    connect(model,&Model3D::signal_finishLoad,this,&MyOldOpenGLWidget::slot_finishLoadStl);
    initialOpengl();
}

void MyOldOpenGLWidget::initialOpengl(){
    centerInOpenGlWid = model->model_getCenter(model->model_getSize());

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    cam.setCamera(centerInOpenGlWid.x(),centerInOpenGlWid.y(),centerInOpenGlWid.z()*5,//+100,
                  centerInOpenGlWid.x(),centerInOpenGlWid.y(),centerInOpenGlWid.z(),
                  0.0,1.0,0.0
                  );
    resizeGL(width(),height());

}

void MyOldOpenGLWidget::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    ///create 教材上285页 开始绘制前，先清楚屏幕和深度缓存
    ///重置模型视图矩阵，这样便将当前点移动到了窗口的中心
    ///现在窗口中心即为坐标原点。
    ///完成这俩步后，就可以开始绘制了
    ///
    ///下面这句定位摄像机，若是rotate了 定位的摄像机在世界坐标系里
    ///旋转世界坐标系，摄像机就像人在地球上一样，地球转了，人也转了，
    cam.setModelViewMatrix();
    model->model_draw();
}

void MyOldOpenGLWidget::resizeGL(int w, int h){
    ///create 第283页，
    ///resize中设置opengl的视口和投影 最后切换至模型视图矩阵，准备绘制

    //当窗口大小改变 相应的应该变换 投影矩阵 和 模型观察矩阵
    //在屏幕上打开窗口的任务是由窗口系统，而不是OpenGL负责的
    //下面是虽说openglWid的大小是变化成了w h 所以opengl的“视口”显示范围也要相应的变化
    //glViewport什么矩阵都不属于 只是确定一下显示范围
    if (h==0)
    {
        h=1;
    }
    glViewport(0,0,w,h);


    //下面这句 集成了对gluperspective的设置
    ///gluPerspective这个函数指定了观察的视景体
    ///在世界坐标系中的具体大小，一般而言，
    ///其中的参数aspect应该与窗口的宽高比大小相同。
    ///比如aspect=2.0表示在观察者的角度中物体的宽度是高度的两倍
    ///在视口中宽度也是高度的两倍，这样显示出的物体才不会被扭曲。
    ///调用perspect之前，需要先调用glLoadidentity来把当前矩阵单位化
    ///从而使各种变换效果不会叠加，比如旋转就只旋转，透视就只透视
    ///通过调用glLoadidentity就不会既旋转有透视了。
    cam.setShape(45,(GLfloat)w/h,0.1f,centerInOpenGlWid.z()*10);//200.0f);

    //投影矩阵 = glperspect + glorth3D
    //46页，将镜头拉近，可以调节投影矩阵
    //“设置摄像机的焦距”

    glMatrixMode(GL_MODELVIEW);
}

void MyOldOpenGLWidget::initializeGL(){
    lightingStruct whiteLighting ={
        {0.0,0.0,0.0,1.0},
        {1.0,1.0,1.0,1.0},
        {1.0,1.0,1.0,1.0},
    };

    materialStruct whiteShinyMaterial={
        {1.0,1.0,1.0,1.0},
        {1.0,1.0,1.0,1.0},
        {1.0,1.0,1.0,1.0},
        100.0
    };

    glLightModeli(GL_LIGHT_MODEL_TWO_SIDE, GL_TRUE);
    glDisable( GL_CULL_FACE);       //加上上面俩句 就能把反面光也调出来了

    glEnable(GL_LIGHTING);

    glEnable(GL_LIGHT0);
    glLightfv(GL_LIGHT0,GL_AMBIENT,whiteLighting.ambient);
    glLightfv(GL_LIGHT0,GL_DIFFUSE,whiteLighting.diffuse);
    glLightfv(GL_LIGHT0,GL_SPECULAR,whiteLighting.specular);

    //这里暂时没有指定光源的位置

    setMaterial(&whiteShinyMaterial);

    //  glShadeModel(GL_SMOOTH);							// Enable Smooth Shading
    glClearColor(0.0f, 0.0f, 0.0f, 0.5f);				// Black Background
    glClearDepth(1.0f);									// Depth Buffer Setup
    glEnable(GL_DEPTH_TEST);							// Enables Depth Testing
    glDepthFunc(GL_LEQUAL);								// The Type Of Depth Testing To Do
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	// Really Nice Perspective Calculations

}

void MyOldOpenGLWidget::slot_recieveStl(QString path)
{
    //文件读取 提取其中的各个面
    //载入咱们的model里面
    model->model_clear();
    model->model_load(path);
}

void MyOldOpenGLWidget::slot_finishLoadStl()
{
    initialOpengl();
    updateGL();
}

void MyOldOpenGLWidget::slot_moveLeft()
{
    cam.slide(5,0,0);
    updateGL();

}
void MyOldOpenGLWidget::slot_moveRight()
{
    cam.slide(-5,0,0);
    updateGL();
}

void MyOldOpenGLWidget::slot_moveUp()
{
    cam.slide(0,-5,0);
    updateGL();
}

void MyOldOpenGLWidget::slot_moveDown()
{
    cam.slide(0,5,0);
    updateGL();
}

void MyOldOpenGLWidget::setMaterial(materialStruct *material)
{
    glMaterialfv(GL_FRONT_AND_BACK,GL_AMBIENT,material->ambient);
    glMaterialfv(GL_FRONT_AND_BACK,GL_DIFFUSE,material->diffuse);
    glMaterialfv(GL_FRONT_AND_BACK,GL_SPECULAR,material->specular);
    glMaterialf(GL_FRONT_AND_BACK,GL_SHININESS,material->shininess);
}

void MyOldOpenGLWidget::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
}

void MyOldOpenGLWidget::mouseMoveEvent(QMouseEvent *event)
{

    int dx = event->x() - lastPos.x();
        int dy = event->y() - lastPos.y();
        if (event->buttons() & Qt::LeftButton)
        {
            RotateX(dx);
            RotateY(dy);
        }
        lastPos = event->pos();
        updateGL();
}

void MyOldOpenGLWidget::wheelEvent(QWheelEvent *event)
{
    int numDegrees = event->delta() / 8;
    int numSteps = numDegrees / 15;

    if(numSteps<0)
    {
        cam.slide(0,0,-5);
    }
    else
    {
        cam.slide(0,0,5);
    }
    updateGL();
}

void MyOldOpenGLWidget::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Left)
        cam.slide(-5,0,0);
    else if(event->key() == Qt::Key_Right)
        cam.slide(5,0,0);
    else if(event->key() == Qt::Key_Up)
        cam.slide(0,5,0);
    else if(event->key() == Qt::Key_Down)
        cam.slide(0,-5,0);
    updateGL();
}
void MyOldOpenGLWidget::RotateX(float angle)
{
    float d=cam.getDist();
    int cnt=100;
    float theta=angle/cnt;
    float slide_d=-2*d*sin(theta*3.14159265/360);
    cam.yaw(theta/2);
    for(;cnt!=0;--cnt)
    {
        cam.slide(slide_d,0,0);
        cam.yaw(theta);
    }
    cam.yaw(-theta/2);
}

void MyOldOpenGLWidget::RotateY(float angle)
{
    float d=cam.getDist();
    int cnt=100;
    float theta=angle/cnt;
    float slide_d=2*d*sin(theta*3.14159265/360);
    cam.pitch(theta/2);
    for(;cnt!=0;--cnt)
    {
        cam.slide(0,slide_d,0);
        cam.pitch(theta);
    }
    cam.pitch(-theta/2);
}
