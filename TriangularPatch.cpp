#include "TriangularPatch.h"

TriangularPatch::TriangularPatch(QObject *parent) :
    QObject(parent)
{
}
QVector<QVector3D> TriangularPatch::getTriAngle() const
{
    return triAngle;
}

void TriangularPatch::setTriAngle(const QVector<QVector3D > &value)
{
    triAngle = value;
}

QVector3D TriangularPatch::getNormalVector() const
{
    return normalVector;
}

void TriangularPatch::setNormalVector(const QVector3D &value)
{
    normalVector = value;
}
