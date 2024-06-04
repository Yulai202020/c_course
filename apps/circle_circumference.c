#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.141592;
    double radius, circumference, area;

    printf("Enter radius: ");
    scanf("%lf", &radius);
    circumference = 2 * PI * radius;
    area = PI * pow(radius, 2);

    printf("Circumference of circle with raduis %lf equal to %lf.\n", radius, circumference);
    printf("Area of circle with raduis %lf equal to %lf.\n", radius, area);
    return 0;
}