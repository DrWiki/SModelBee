#ifndef SMODELBEE_H
#define SMODELBEE_H
#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QMessageBox>
#include <MyOldOpenGLWidget.h>
namespace Ui {
class SModelBee;
}

class SModelBee : public QMainWindow
{
    Q_OBJECT

public:
    explicit SModelBee(QWidget *parent = 0);
    ~SModelBee();
    void openOutside(QString path);

private:
    Ui::SModelBee *ui;
signals:
    void signal_loadStl(QString path);
public slots:
    void slot_openStl();
    void slotAbout();

};

#endif // SMODELBEE_H
