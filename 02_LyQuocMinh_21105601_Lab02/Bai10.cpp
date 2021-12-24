#include <stdio.h>
#include <math.h>
int main () {
	float f,c;
	printf("Nhap vao nhiet do Fahreneit = ");
	scanf("%f", &f);
	printf("Chuyen doi sang Celcius = %f", 5*(f-32)/9);
	printf("\nNhap vao nhiet do Celcius =");
	scanf("%f", &c);
	printf("Chuyen doi sang Fahreneit = %f", (c*9/5)+32);
	return 0;
}
