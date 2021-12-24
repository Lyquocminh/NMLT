#include <stdio.h>
#include <math.h>
int main(){
	int n;
	float s = 0;
	printf("Nhap so nguyen n: ");
	scanf("%d", &n);
	while (n <= 0){
		printf("Nhap lai (n > 0): ");
		scanf("%d", &n);
	};
	float dau = -1;
	for (int i = 1; i <= n; i++){
		dau=-dau;
		s+=dau/(4*i*i);
	}
	printf("S = %f", s);
	return 0;
}
