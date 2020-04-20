#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <conio.h>



int main(void) {

    double x, y, z, a, b,a1,a2,a3;

    printf("Write x, y, z "); scanf_s("%lf %lf %lf", &x, &y, &z);
    if ((1 / 2 + pow(sin(abs(y + 2)), 3)) != 0)
        if (fabs(x + (M_PI / 2)) < 1) {
            a1 = ((2 * sin(y + (M_PI / 3))));
            a2 = (1 / 2 + pow(sin(abs(y + 2)), 3));
            a3 = asin(x + (M_PI / 2));
            a = a1 / a2 + a3;
            printf("Ansver a = %lf \n", a);
        }
        else printf("invalid sintaxsis\n");
    if (z <= 0)
    {
        printf("invalid sintaxsis\n");
    }
    else if ((3 - cbrt(z)) == 0)
    {
        printf("invalid sintaxsis\n");
    }
    else
    {
        z = pow(z, 2);
        b = 1 + ((z / 5) / (3 - cbrt(z)));
        printf("Ansver b = %lf\n", b);
    }

    system("pause");
}