#ifndef GEOMETRY_C
#define GEOMETRY_C
#include "structs.c"
#include <math.h>

#pragma region SUPPORT2D

Vector2 getVector2DBetweenTwoPoints(Point2D pStart, Point2D pEnd)
{
    Vector2 vector;
    vector.x = pEnd.x - pStart.y;
    vector.y = pEnd.y - pStart.y;
    return vector;
}
Vector2 multiplyVector2DByScalar(Vector2 original, const double scalar)
{
    original.x = original.x * scalar;
    original.y = original.y * scalar;
    return original;
}
Vector2 unitaryVector2D(Vector2 e1)
{
    double scalar = 1 / getVector2DNorm(e1);
    return multiplyVector2DByScalar(e1, scalar);
}
double getVector2DNorm(Vector2 e1)
{
    return sqrt((pow((e1.x), 2) + pow((e1.y), 2)));
}
double distanceBetweenTwoPoints2D(Point2D p1, Point2D p2)
{
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}
double scalarProduct2D(Vector2 e1, Vector2 e2)
{
    return (e1.x * e2.x) + (e2.y * e2.y);
}
double scalarProduct2D_getAngle(Vector2 e1, Vector2 e2)
{
    return acos(ScalarProduct2D(e1, e2) / getVector2DNorm(e1) * getVector2DNorm(e2));
}

#pragma endregion SUPPORT2D

#pragma region SUPPORT_3D

Vector3 getVector3DBetweenTwoPoints(Point3D pStart, Point3D pEnd)
{
    Vector3 vector;
    vector.x = pEnd.x - pStart.y;
    vector.y = pEnd.y - pStart.y;
    vector.z = pEnd.z - pStart.z;
    return vector;
}
Vector3 multiplyVector3DByScalar(Vector3 original, const double scalar)
{
    original.x = original.x * scalar;
    original.y = original.y * scalar;
    original.z = original.z * scalar;
    return original;
}
Vector3 unitaryVector3D(Vector3 e1)
{
    double scalar = 1 / getVector3DNorm(e1);
    return multiplyVector3DByScalar(e1, scalar);
}
double getVector3DNorm(Vector3 e1)
{
    return sqrt((pow((e1.x), 2) + pow((e1.y), 2) + pow((e1.z), 2)));
}
double distanceBetweenTwoPoints3D(Point3D p1, Point3D p2)
{
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2) + pow((p1.z - p2.z), 2));
}
double scalarProduct3D(Vector3 e1, Vector3 e2)
{
    return (e1.x * e2.x) + (e2.y * e2.y) + (e1.z * e2.z);
}
double scalarProduct3D_getAngle(Vector3 e1, Vector3 e2)
{
    return acos(ScalarProduct3D(e1, e2) / getVector3DNorm(e1) * getVector3DNorm(e2));
}

#pragma endregion SUPPORT_3D

#endif