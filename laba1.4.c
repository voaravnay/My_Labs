#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "RUS");
    char s[2];
    int s1, h, i, n, a;
    s1 = 0; h = 0; i = 0; n = 0; a = 0;
    do
    {
        gets_s(s, 2);
        if (s[0] == 's')
            s1 = 1;
        if (s[0] == 'h')
            h = 1;
        if (s[0] == 'i')
            i = 1;
        if (s[0] == 'n')
            n = 1;
        if (s[0] == 'a')
            a = 1;
    } while (s[0] != '!');
    if (s1 == 1 && h == 1 && i == 1 && n == 1 && a == 1)
        printf("Верно.\n");
    else
        printf("Неверно.\n");
    system("pause");
}