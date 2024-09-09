// Name: Quyen Le
// UCFID: 5609279

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(int argc, char **argv);
double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();

int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    return 0;
}

// Helper function that calculates distance and prints inputted points
double distanceCalc() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.3lf; y1 = %.3lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf\n", x2, y2);

    return distance;
}

// Function that prints and return distance
double calculateDistance() {
    double distance = distanceCalc();

    printf("The distance between the two points is %.3lf\n", distance);

    return distance;
}

// Function to calculate and print perimeter
double calculatePerimeter() {
    double distance = distanceCalc();
    double radius = distance / 2;
    double perimeter = 2 * PI * radius;

    printf("The perimeter of the city encompassed by your request is %.3lf\n", perimeter);
    return 4.0;
}

// Function to calculate and print area
double calculateArea() {
    double distance = distanceCalc();
    double radius = distance / 2;
    double area = PI * pow(radius, 2);

    printf("The area of the city encompassed by your request is %.3lf\n", area);

    return 4.0;
}

// Function to calculate and print width
double calculateWidth() {
    double width = distanceCalc();

    printf("The width of the city encompassed by your request is %.3lf\n", width);

    return 2.0;
}

// Function to calculate and print height
double calculateHeight() {
    double height = distanceCalc();

    printf("The height of the city encompassed by your request is %.3lf\n", height);

    return 2.0;
}