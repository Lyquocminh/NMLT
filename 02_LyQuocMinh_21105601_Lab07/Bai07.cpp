#include <stdio.h>
#include <math.h>
int main(){
	int n;
	float s = 0;
	printf("Nhap vao so nguyen n (n >= 0): ");
	scanf("%d", &n);
	while (n < 0){
		printf("Nhap lai (n >= 0): ");
		scanf("%d", &n);
	}
	float dau = -1;
	for (int i = 0; i <= n; i++){
		dau=-dau;
		s+=dau/(pow(2*i+1,2));
	}
	printf("S = %f", s);
	return 0;
}
