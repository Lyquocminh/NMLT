#include <stdio.h>
#include <math.h>
int main() {
	int n, tong = 0;
	printf("Nhap so luong cua day: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++ )
		tong = tong+ pow(10,i) - 1;
	printf("Tong cua day = %d", tong);
	int n1,i = 1, tong1 = 0;
	printf("\nNhap so luong cua day: ");
	scanf("%d", &n1);
	while(i <= n1){
		tong1 = tong1+ pow(10,i) - 1;
		i++;
	}
	printf("Tong cua day = %d", tong1);
	int n2, tong2 = 0, j = 1;
	printf("\nNhap so luong cua day: ");
	scanf("%d", &n2);
	do{
		tong2 = tong2+ pow(10,j) - 1;
		j++;
	}while(j <= n2);
	printf("Tong cua day = %d", tong2);
	return 0;
}
