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
int main(){
	int n;
	do{
		printf("Nhap n (n >= 0): ");
		scanf("%d", &n);
		timChuSoMinMax(n);
	}while (n<0);
	return 0;
}
