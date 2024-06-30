#ifndef STRUCTS_C
#define STRUCTS_C

typedef struct Point2D
{
    double x;
    double y;
} Point2D;

typedef struct Point3D
{
    double x;
    double y;
    double z;
} Point3D;

typedef struct Vector2
{
    double x;
    double y;

} Vector2;

typedef struct Vector3
{
    double x;
    double y;
    double z;
} Vector3;

typedef enum R_CONJUNCT
{
    R1,
    R2,
    R3
};

typedef struct straight2D{
    double angular_coeficient;
    double x;
    double linear_coeficient;
    double y;
    double c;

}Straight2D;
#endif