#include <stdio.h>

int main() {
	int n;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	if ( n < 2)
		printf("%d khong phai la so nguyen to", n);
	int i = 2;
	for (; i < n; i++)
		if (n % i == 0 ){
			printf("%d khong phai la so nguyen to", n);
			break;
		}
	if ( i == n) 
		printf("%d la so nguyen to", n);
	int n1;
	printf("\n\nNhap vao so n: ");
	scanf("%d", &n1);
	if ( n1 < 2)
		printf("%d khong phai la so nguyen to", n1);
	int i1 = 2;
	while(i1 < n1){
		if (n1%i1==0){
			printf("%d khong phai la so nguyen to", n1);
			break;
		}
		i1++;
	}
	if ( i1 == n1)
		printf("%d la so nguyen to", n1);
	int n2;
	printf("\n\nNhap vao so n: ");
	scanf("%d", &n2);
	if ( n1 < 2)
		printf("%d khong phai la so nguyen to", n2);
	int i2 = 2;
	do{
		if (n2%i2==0){
			printf("%d khong phai la so nguyen to", n2);
			break;
		}
		i2++;
	}while(i2 < n2);
	if ( i2 == n2)
		printf("%d la so nguyen to", n2);
	return 0;
}
