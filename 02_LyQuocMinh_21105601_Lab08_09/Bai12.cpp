#include <stdio.h>
#include <math.h>
int kt_ngAm(char ch){
	if (ch>='a' && ch <= 'z'){
		ch= ch-32;
		switch(ch){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				return 1;
		}
	}
	return 0;
}
int tongUocSo(int n){
	int tong = 1;
	for (int i = 2; i <= abs(n); i++)
		if (abs(n)%i==0)
			tong+=i;
	return tong;
}
int soChinhPhuong(int n){
	if (n==1)
		return 1;
	for (int i = 1; i<= n/2; i++){
		if (i*i==n)
			return 1;
	}
	return 0;
}
int main(){
	int a;
	do{
		printf("\n=========MENU=======");
		printf("\n1-Kiem tra ky tu co phai nguyen am khong ");
		printf("\n2-Tinh tong cac uoc so cua n");
		printf("\n3-Kiem tra mot so nguyen co phai so chinh phuong khong");
		printf("\n0-Thoat");
		printf("\nChon chuc nang: ");
		scanf("%d", &a);
		fflush(stdin);
		switch (a){
			case 1:
				char c;
				printf("Nhap vao ky tu: ");
				scanf("%c", &c);
				if (kt_ngAm(c)==1)
					printf("\nKy tu ban nhap la mot nguyen am");
				else 
					printf("\nKy tu ban nhap khong phai nguyen am");
				break;
			case 2:
				int n;
				printf("Nhap vao n: ");
				scanf("%d", &n);
				printf("\nTong cac uoc so cua n = %d", tongUocSo(n));
				break;
			case 3:
				int m;
				printf("Nhap vao so nguyen: ");
				scanf("%d", &m);
				if(soChinhPhuong(m)== 1)
					printf("\nSo ban nhap la so chinh phuong");
				else
					printf("\nSo ban nhap khong phai so chinh phuong");
				break;
			case 0:
				printf("Thoat khoi chuong trinh");
				break;
			default:
				printf("Nhap sai");
				
		}
	}while (a!=0);
	return 0;
}
