#include <stdio.h>
#include <math.h>

int main() {
    int x[3], y[3];

    // Input points
    for (int i = 0; i < 3; i++) {
        printf("Enter X of point %d: ", i+1);
        scanf("%d", &x[i]);

        printf("Enter Y of point %d: ", i+1);
        scanf("%d", &y[i]);
    }

    // Distances (a = BC, b = CA, c = AB)
    double d[3];
    d[0] = sqrt(pow(x[1] - x[2], 2) + pow(y[1] - y[2], 2));  // BC
    d[1] = sqrt(pow(x[2] - x[0], 2) + pow(y[2] - y[0], 2));  // CA
    d[2] = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));  // AB

    // Triangle check
    int isTriangle = 0;

    if (d[0] < d[1] + d[2] &&
        d[1] < d[0] + d[2] &&
        d[2] < d[0] + d[1])
        isTriangle = 1;

    // Area
    if (isTriangle) {
        double s = (d[0] + d[1] + d[2]) / 2;
        double area = sqrt(s * (s - d[0]) * (s - d[1]) * (s - d[2]));

        printf("Area of the triangle is: %.2lf\n", area);
    } else {
        printf("Not a triangle.\n");
    }

    return 0;
}
