// Quyen Le
//

#include <stdio.h>
#include <math.h>

double calculateDistance();
{
    double x1, y1, x2, y2 = 0;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1,2));

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The distance between the two points is %lf", distance);

    return distance;
}

printf(distance)