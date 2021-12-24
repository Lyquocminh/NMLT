#include <stdio.h>
#include <math.h>
int giaithua(int n){
	int kq = 1;
	for (int i = 2; i <= n; i++)
		kq*=i;
	return kq;
}
double EmuX(double x, int n){
	double s = 0;
	for (int i = 0; i <= n; i++)
		s+=pow(x,i)/giaithua(i);
	return s;
}
int main(){
	int n;
	double x;
	do{
		printf("Nhap vao so nguyen n (n>1): ");
		scanf("%d", &n);
	}while (n <= 1);
	printf("Nhap vao so thuc x: ");
	scanf("%lf", &x);
	printf("\ne^x = %f", EmuX(x,n));
	return 0;
}
