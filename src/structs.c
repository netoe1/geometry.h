#ifndef STRUCTS_C
#define STRUCTS_C

#include <math.h>


typedef struct Point2D{
    float x;
    float y;
}Point2D;

typedef struct Point3D{
    float x;
    float y;
    float z;
}Point3D;


typedef struct Vector2
{
    float x;
    float y;

}Vector2;

typedef struct Vector3
{
    float x;
    float y;
    float z;
}Vector3;

Point2D initPoint2D(const float x,const float y){
    Point2D p = {x,y};
    return p;
}

Point3D initPoint3D(const float x,const float y,const float z){
    Point3D p = {x,y,z};
    return p;
}

Vector2 getDiagonalStraight_2D(const Vector2 p1,const Vector2 p2){
    Vector2 ret = {p1.x + p2.x,p2.y + p2.y};
    return ret;
}

Vector2 getDiagonalStraight_3D(const Vector3 p1,const Vector3 p2){
    Vector2 ret = {p1.x + p2.x,p1.y + p2.y, p1.z + p2.z};
    return ret;
}

float getDistanceTwoPoints_2D(const Point2D p1,const Point2D p2){

    return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2) );
}

float getDistanceTwoPoints_3D(const Point3D p1,const Point3D p2){

    return sqrt(pow((p1.x - p2.x),2) + pow((p1.y - p2.y),2) + pow((p1.z - p2.z),2) );
}


float getVectorNorm_2D(Vector2 vector){
    return sqrt(pow(vector.x,2) + pow(vector.y,2));
}

float getVectorNorm_3D(Vector3 vector){
    return sqrt(pow(vector.x,2) + pow(vector.y,2) + pow(vector.z,2));
}

float getVectorProduct_2D(Vector2 e1, Vector2 e2){
    return (e1.x * e2.x) + (e1.y *e2.y);
}

float getVectorProduct_3D(Vector3 e1, Vector3 e2){
    return (e1.x * e2.x) + (e1.y *e2.y) + (e1.z * e2.z);
}

float getAngleBetweenTwoVectors_2D(Vector2 e1,Vector2 e2){
    return acos(getVectorProduct_2D(e1,e2) / getVectorNorm_2D(e1) *getVectorNorm_2D(e2));
}









#endif