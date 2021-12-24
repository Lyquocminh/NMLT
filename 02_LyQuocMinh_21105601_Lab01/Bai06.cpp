#include <stdio.h>

int main(int argc, char *argv[]) {
	float a,b;
	printf("Nhap chieu cao (m) ");
	scanf("%f", &a);
	printf("Nhap can nang (kg) ");
	scanf("%f", &b);
	printf("BMI = %f", b/(a*a));
	return 0;
}
