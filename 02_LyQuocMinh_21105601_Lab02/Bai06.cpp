#include <stdio.h>
#include <math.h>
int main()  {
	int a;
	printf("Nhap vao so nguyen ");
	scanf("%d", &a);
	printf("%f", a*a/(1+(a*a)/(1+(a*a)/(1+a*a*1.0))));
	return 0;
}
