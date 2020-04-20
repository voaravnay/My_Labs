#include <stdio.h>
#include <math.h>
#include <conio.h>


int main(void) {
	float a, y;
	printf("A = "); scanf_s("%f", &a);

	if (a <= 0) {
		y = -a;
	}
	if (1 >= a >= 0) {
		y = a;
	}
	if (2 >= a >= 1) {
		y = 1;
	}
	if (2.5 >= a >= 2) {
		y = a / 2;
	}
	if (a > 2.5) {
		y = -a / 2;
	}
	printf("%.2f", y);
	_getch();
	return 0;





	int _getch();
	return 0;
}