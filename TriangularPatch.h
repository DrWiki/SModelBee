#ifndef TRIANGULARPATCH_H
#define TRIANGULARPATCH_H
#include <QObject>
#include <QVector>
#include <QVector3D>

class TriangularPatch : QObject
{
public:
    Q_OBJECT
public:
    explicit TriangularPatch(QObject *parent = 0);
private:
    QVector3D normalVector;
    QVector<QVector3D> triAngle;
public:

    QVector3D getNormalVector() const;
    void setNormalVector(const QVector3D &value);

    QVector<QVector3D> getTriAngle() const;
    void setTriAngle(const QVector<QVector3D> &value);
signals:

public slots:

};

#endif // TRIANGULARPATCH_H
