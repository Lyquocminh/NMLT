#include <stdio.h>

int giaiThua(int n){
	double p = 1;
	for (int i = 2; i <= n; i++){
		p*=i;
	}
	return p;
}
int main(){
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);
	while (n <= 0){
		printf("Nhap lai (n > 0): ");
		scanf("%d",&n);
	}
	printf("Giai thua cua %d = %d", n, giaiThua(n));
	return 0;
}
