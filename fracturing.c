// Name: Quyen Le
// UCFID: 5609279

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(int argc, char **argv) {
    double calculateDistance();
    double calculatePerimeter();
    double calculateArea();
    double calculateWidth();
    double calculateHeight();
    return 0;
}

void askForUserInput() {
    double
}

double calculateDistance() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The distance between the two points is %lf", distance);

    return distance;
}

double calculatePerimeter() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    double distance = calculateDistance();
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The perimeter of the city encompassed by your re-quest is %lf", perimeter);
    return 3.0;
}

double calculateArea() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    double distance = calculateDistance();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The area of the city encompassed by your request is %lf", area);

    return 2.0;
}

double calculateWidth() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    double width = calculateDistance();

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The width of the city encompassed by your request is %lf", width);

    return 1.0;
}

double calculateHeight() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    double height = calculateDistance();

    printf("Point #1 entered: x1 = %lf; y1 = %lf", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf", x2, y2);
    printf("The height of the city encompassed by your request is %lf", height);

    return 1.0;
}