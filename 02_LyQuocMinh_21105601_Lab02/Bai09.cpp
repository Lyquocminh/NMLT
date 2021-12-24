#include <stdio.h>
#include <math.h>
int main () {
	float s,r;
	printf("Nhap vao dien tich mat cau: ");
	scanf("%f", &s);
	r = sqrt(s/(4*3.14));
	printf("The tich mat cau: %f", (4*3.14*pow(r,3)/3));
	return 0;
}
	
