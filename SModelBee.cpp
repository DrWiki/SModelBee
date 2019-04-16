#include "SModelBee.h"
#include "ui_SModelBee.h"

SModelBee::SModelBee(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SModelBee){
    ui->setupUi(this);

    QObject::connect(ui->Pb00OpenStl,&QPushButton::clicked,this,&SModelBee::slot_openStl);
    QObject::connect(this,SModelBee::signal_loadStl,ui->QOGW00mian,MyOldOpenGLWidget::slot_recieveStl);
    QObject::connect(ui->Pb00Up,&QPushButton::clicked,ui->QOGW00mian,MyOldOpenGLWidget::slot_moveUp);
    QObject::connect(ui->Pb00Down,&QPushButton::clicked,ui->QOGW00mian,MyOldOpenGLWidget::slot_moveDown);
    QObject::connect(ui->Pb00Left,&QPushButton::clicked,ui->QOGW00mian,MyOldOpenGLWidget::slot_moveLeft);
    QObject::connect(ui->Pb00Right,&QPushButton::clicked,ui->QOGW00mian,MyOldOpenGLWidget::slot_moveRight);
    QObject::connect(ui->Ac00About,&QAction::triggered,this,&SModelBee::slotAbout);

}

SModelBee::~SModelBee(){
    delete ui;

}

void SModelBee::slot_openStl(){
    //加载一个stl文件  设置打开文件的过滤器
    QString path;
    path = QFileDialog::getOpenFileName(this,"open file dialog","E:/000Home/QtHome/SModelBee/StlFile","STL files (*.stl)");
    //然后将路径传递给  opengl，opengl里面在调用model->load
    if(!path.isEmpty()){
        emit signal_loadStl(path);
    }
    return;
}

void SModelBee::slotAbout(){
   QImage *pImage = new QImage(":/back/Image/1.jpg");
   *pImage = pImage->scaled(QSize(pImage->width()/3,pImage->height()/3));
   QMessageBox box;
   //box.setParent();
   box.setWindowTitle("软件所有权");
   box.setInformativeText("本软件为科研训练展示性软件\n作者:南京理工大学钱学森学院_916000710012宋子午\n指导老师:刘婷婷");
   box.setIconPixmap(QPixmap::fromImage(*pImage));
   box.move(QPoint(100,100));
   box.show();
   box.exec();
}

void SModelBee::openOutside(QString path){
    emit signal_loadStl(path);
    return;
}
