#include <stdio.h>

int main() {
	int a,b;
	printf("Nhap vao hai so nguyen duong: ");
	scanf("%d%d", &a,&b);
	for (int i = a; i >= 0; i-- ){
		if (a%i==0 && b%i==0){
			printf("uoc so chung lon nhat cua %d va %d la %d",a,b, i);
			break;
		}
	}
	int a1,b1;
	printf("\n\nNhap vao hai so nguyen duong: ");
	scanf("%d%d", &a1,&b1);
	int i1 = a1;
	while(i1 >= 0){
		if (a1%i1==0 && b1%i1==0){
			printf("uoc so chung lon nhat cua %d va %d la %d",a1,b1, i1);
			break;
		}
		i1--;
	}
	int a2,b2;
	printf("\n\nNhap vao hai so nguyen duong: ");
	scanf("%d%d", &a2,&b2);
	int i2 = a2;
	do{
		if (a2%i2==0 && b2%i2==0){
			printf("uoc so chung lon nhat cua %d va %d la %d",a2,b2 ,i2);
			break;
		}
		i2--;
	}while (i2 >= 0);
	return 0;
}
