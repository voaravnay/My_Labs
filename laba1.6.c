#include <stdio.h>
#include <math.h>
int main(){
    int i,n;
    double x, p = 1;
    for (i = 1;i <= n;i++)
        p = p * (x + cos(i * x)) / pow(2, i);
    printf("%lf\n", p);
    system("pause");
}