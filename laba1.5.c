#include <stdio.h>

int main(){
    double a, s = 0;
    int n=1;
    scanf_s("%lf", &a);
    do
    {
        s = s + (1.0 / n);
        n++;
    } while (s < a);
    printf("%i\n", n);
    system("pause");
}