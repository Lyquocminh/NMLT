#include <stdio.h>
#include <math.h>
int main() {
	float x1,y1,x2,y2;
	printf("Nhap vao x1: ");
	scanf("%f", &x1);
	printf("Nhap vao y1: ");
	scanf("%f", &y1);
	printf("Nhap vao x2: ");
	scanf("%f", &x2);
	printf("Nhap vao y2: ");
	scanf("%f", &y2);
	printf("Khoang cach giua hai diem la: %f", sqrt(pow((y1-y2),2)+pow((x1-x2),2)));
	return 0;
}
