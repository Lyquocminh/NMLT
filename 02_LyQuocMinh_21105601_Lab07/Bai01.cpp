#include <stdio.h>

int main() {
	printf("\tCelcius\t\tFahrenheit");
	for (int i = 0; i <=10; i++){
		printf("\n\t%d\t\t%.2f", i, (9.0*i/5)+32 );
	}
	printf("\n\n\tFahrenheit\tCelcius");
	for (int i = 32; i <= 42; i++){
		printf("\n\t%d\t\t%.2f", i, (5.0*(i-32))/9);
	}
	return 0;
}
