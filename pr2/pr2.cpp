#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>

using namespace std;
int main()
{
    double x, y, z, res1, res2, res3, res;

    //-15.246 0.04642 2000.1
    //-25.4 576 -0.00475

    printf("x, y, z> ");
    if (scanf_s("%lf %lf %lf", &x, &y, &z) != 3) {
        printf("Wrong.\n");
        return 1;
    }

    if (y <= 0) {
        printf("The logarithm expression is less than 0. Enter y > 0\n");
        return 1;
    }

    res1 = log(pow(y, -sqrt(fabs(x))));
    res2 = (x - y / 2);
    res3 = pow(sin(atan(z)), 2);
    res = res1 * res2 + res3;
    printf("%.3f", res);

    return 0;
}