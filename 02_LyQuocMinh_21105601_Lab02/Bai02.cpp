#include <stdio.h>
#include <math.h>
int main () {
	float a,b;
	printf("Nhap vao canh vuong thu nhat: ");
	scanf("%f", &a);
	printf("Nhap vao canh vuong thu hai: ");
	scanf("%f", &b);
	printf("Dien tich = %f", (a*b)/2);
	printf("\nCanh huyen = %f", sqrt(a*a+b*b));
	return 0;
}
