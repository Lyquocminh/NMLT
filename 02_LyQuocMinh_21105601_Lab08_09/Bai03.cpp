#include <stdio.h>

int sumDigits (int n){
	int sum = 0;
	do {
		int soDu = n%10;
		n = n/10;
		sum+=soDu;
	}while (n > 0);
	return sum;
}
int main(){
	int n;
	do {
		printf("Nhap n (n>=0): ");
		scanf("%d", &n);
		if (n >= 0)
			printf("Tong cac chu so cua n la: %d", sumDigits(n));
		printf("\n------------------------------\n");
	}while (n >= 0);
	return 0;
}
