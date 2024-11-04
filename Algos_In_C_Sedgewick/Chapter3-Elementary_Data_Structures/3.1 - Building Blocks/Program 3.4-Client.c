#include <stdio.h>
#include "Point.h"

float distance(point a, point b);

int main() {
    point p1 = {3.0, 4.0}; // Example coordinates for point p1
    point p2 = {0.0, 0.0}; // Example coordinates for point p2

    float dist = distance(p1, p2);

    printf("Distance between points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n",
           p1.x, p1.y, p2.x, p2.y, dist);

    return 0;
}
