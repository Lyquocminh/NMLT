#include <stdio.h>

int main(){
	float a;
	int n = 0;
	printf("Nhap vao so thuc A (0 < A < 20): ");
	scanf("%f", &a );
	while (a<=0 || a >= 20){
		printf("Nhap lai (0 < A < 20): ");
		scanf("%f", &a);
	};
	float sum = 0;
	do{
		n++;
		sum+=1.0/n;
	}while (sum <= a);
	printf("N = %d", n);
	return 0;
}
