#include <stdio.h>
#include <math.h>
int main(){
	float x;
	float n = 0;
	do{
		printf("Nhap vao so thuc x thuoc doan [-1,1]: ");
		scanf("%f", &x);
	}while( x < 0 || x > 1);
	float tu = pow(x,n), taylor = 0, mau = 1, kt;
	do{
		n++;
		taylor+=tu/mau;
		tu=pow(x,n);
		mau=mau*n;
	}while (kt >= 0.0001);
	printf("e^%f xap xi bang: %f", x,taylor);
	return 0;
}
