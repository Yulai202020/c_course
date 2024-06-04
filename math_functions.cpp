#include <stdio.h>
// this include is necessarily
#include <math.h>

int main() {
    double sqrt_2 = sqrt(2);
    int power_4 = pow(2, 4);

    int a = round(3.14); // like if 2.9 will be 3, if 2.1 will be 2 
    int b = ceil(3.14); // if 3.5 will be 4, if 3.1 will be 4 anyways
    int c = floor(3.14); // if 3.9 will be 3, if 2.1 will be 2

    int g = fabs(-100); // absolute value like |x|
    double logarifm = log(10); // log on basis 10
    double logarifm_3 = log(10) / log(3); // log on basis 3

    // trigonametric functions
    double sinus = sin(45); 
    double tangent = cos(45);
    double cosine = cos(45);

    return 0;
}