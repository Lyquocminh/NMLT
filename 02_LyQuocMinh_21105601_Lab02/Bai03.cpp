#include <stdio.h>
#include <math.h>
int main () {
	float a,b,c,p;
	printf("Nhap vao ba canh cua tam giac: ");
	scanf("%f%f%f", &a,&b,&c);
	p = (a+b+c)/2;
	printf("Chu vi tam giac = %f", p*2);
	printf("\nDien tich tam giac = %f", sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
}
