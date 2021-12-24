#include <stdio.h>
int main() {
	float x,y;
	printf("Nhap vao toa do x,y:");
	scanf("%f%f", &x,&y);
	if (x*y > 0) {
		y = -1*y;
	} else if (x*y < 0) {
		x = -1*x;
	}; 
	printf("Goc phan tu cua toa do x,y la: %f,%f ", x,y);
	return 0;
}
