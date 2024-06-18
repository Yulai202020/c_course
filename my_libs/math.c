#include <stdio.h>

int floor_int(double number) {
    int result = (int) number;
    return result;
}

int module(double number) {
    int result = floor_int(number);
    result++;
    return result;
}

double module1(double number) {
    if (number > 0) {
        return number;
    } else {
        return -number;
    }
}

double pow(double base, double power) {
    double result = 1;
    for (int i = 0; i < power; i++) {
        result *= base;
    }
    return result;
}

double sqrtn(double number, double power) {
    double result = pow(number, 1/power);
    return result;
}

double log(double number) {
    double result = 1;
    return result;
}