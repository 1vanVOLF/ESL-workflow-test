#include <stdio.h>
#include "vector.h"

int main(void)
{
    Vector3D v1 = {1.0, 2.0, 3.0};
    Vector3D v2 = {4.0, 5.0, 6.0};

    Vector3D sum = vec_add(v1, v2);
    printf("Sum: (%.1f, %.1f, %.1f)\n", sum.x, sum.y, sum.z);

    Vector3D sub = vec_sub(v1, v2);
    printf("Sub: (%.1f, %.1f, %.1f)\n", sub.x, sub.y, sub.z);

    double dot = vec_dot(v1, v2);
    printf("Dot product: %.1f\n", dot);

    Vector3D cross = vec_cross(v1, v2);
    printf("Cross product: (%.1f, %.1f, %.1f)\n", cross.x, cross.y, cross.z);

    return 0;
}