#include <stdio.h>

int ktvt(double x, double y, double r){
	double d2= x*x + y*y;
	double r2 = r*r;
	if (d2 < r2)
		return 1;
	else if (d2 == r2)
		return 0;
	return -1; 
}
int main(){
	double x,y,r;
	printf("Nhap vao toa do cua diem: ");
	scanf("%lf%lf", &x,&y);
	do{
		printf("Nhap vao ban kinh duong tron (r >= 0): ");
		scanf("%lf", &r);
	}while (r<0);
	printf("\n%f, %f%, %f", x,y,r);
	int kq = ktvt(x,y,r);
	if (kq == 1)
		printf("Diem nam trong duong tron");
	else if (kq == 0)
		printf("Diem nam tren duong tron");
	else 
		printf("Diem nam ngoai duong tron");
	return 0;
}
