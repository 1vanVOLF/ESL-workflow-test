#ifndef VECTOR_H
#define VECTOR_H

typedef struct
{
    double x, y, z;
} Vector3D;

Vector3D vec_add(Vector3D a, Vector3D b);

Vector3D vec_sub(Vector3D a, Vector3D b);

double vec_dot(Vector3D a, Vector3D b);

Vector3D vec_cross(Vector3D a, Vector3D b);

#endif