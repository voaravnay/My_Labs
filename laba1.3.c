#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void) {
	int n, n1, n2, n3, n4;
	scanf_s("%i", &n);


	if (n > 100 && n < 10000) {

		int n1 = n / 1000;
		int n2 = (n / 100) % 10;
		int n3 = (n / 10) % 10;
		int n4 = n % 10;
		if (n1 == n2 && n2 == n3 && n3 == n4 && n4 == n1) {
			printf("True\n");
			
		}
		else if (n1 == n2 && n2 == n3 && n3 == n1) {
			printf("True\n");
			
		}
		else if (n1 == n2 && n2 == n4 && n4 == n1) {
			printf("True\n");
			
		}
		else if (n1 == n3 && n3 == n4 && n1 == n4) {
			printf("True\n");
			
		}
		else if (n2 == n3 && n3 == n4 && n2 == n4) {
			printf("True\n");
			
		}
		else{
			printf("False");
		}
	}
	
	int _getch();
	return 0;
}
