#include <stdio.h>

int main(){
	int n,s = 1;
	do{
		printf("Nhap vao so nguyen duong n (n > 0): ");
		scanf("%d", &n);
	}while (n <= 0);
	for (int i = n; i > 0; i-=2)
		s*=i;
	printf("S = %d", s);
	return 0;
}
