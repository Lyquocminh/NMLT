#include <stdio.h>

int main(){
	int n, s = 0;
	do {
		printf("Nhap so nguyen: ");
		scanf("%d", &n);
		s+=n;
	}while (n!=0);
	printf("Tong cac so ban nhap la: %d\n\n", s);
	int n1=1, s1 = 0;
	while (n1!=0){
		printf("Nhap so nguyen: ");
		scanf("%d", &n1);
		s1+=n1;
	}
	printf("Tong cac so ban nhap la: %d\n\n", s1);
	int n2=1,s2 = 0;
	for (;n2!= 0;){
		printf("Nhap so nguyen: ");
		scanf("%d", &n2);
		s2+=n2;
	}
	printf("Tong cac so ban nhap la: %d", s2);
	return 0;
}
