#include "vector.h"

Vector3D vec_add(Vector3D a, Vector3D b)
{
    return (Vector3D){a.x + b.x, a.y + b.y, a.z + b.z};
}

Vector3D vec_sub(Vector3D a, Vector3D b)
{
    return (Vector3D){a.x - b.x, a.y - b.y, a.z - b.z};
}

double vec_dot(Vector3D a, Vector3D b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector3D vec_cross(Vector3D a, Vector3D b)
{
    return (Vector3D)
    {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}