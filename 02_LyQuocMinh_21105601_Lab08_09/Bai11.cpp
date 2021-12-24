#include <stdio.h>

void timChuSoMinMax(int n){
	int chuso,min,max;
	chuso = n%10;
	n=n/10;
	min = max = chuso;
	while (n>0){
		chuso = n%10;
		n = n/10;
		if (min > chuso)
			min = chuso;
		if (max < chuso)
			max = chuso;
	}
	printf("\nChu so nho nhat cua n la: %d", min);
	printf("\nChu so lon nhat cua n la: %d", max);
}
int kt_soNguyenTo(int a){
	for (int i = 2; i < a; i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int a;
	do{
		printf("\n=========MENU=======");
		printf("\n1-Kiem tra so nguyen to");
		printf("\n2-Tim chu so lon nhat, nho nhat");
		printf("\n3-Thoat");
		printf("\nChon chuc nang: ");
		scanf("%d", &a);
		switch (a){
			case 1:
				int n;
				do{
					printf("Nhap vao so nguyen duong n (n >= 0): ");
					scanf("%d", &n);
				}while (n<0);
				if (kt_soNguyenTo(n)==1)
					printf("\nSo ban nhap la so nguyen to");
				else 
					printf("\nSo ban nhap khong phai la so nguyen to");
				break;
			case 2:
				int m;
				do{
					printf("Nhap vao so nguyen duong m (m >= 0): ");
					scanf("%d", &m);
					timChuSoMinMax(m);
				}while (m<0);
				break;
			case 3:
				printf("Thoat khoi chuong trinh");
				break;
			default:
				printf("Nhap sai");	
		}
	}while (a != 3);	
	return 0;
}
