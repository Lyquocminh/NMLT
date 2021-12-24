#include <stdio.h>
#include <math.h>
int main(){
	int n, s4 = 0;
	float s1 = 0, s2 = 0, s3 = 1.0;
	do {
		printf("Nhap vao n (> 0): ");
		scanf("%d", &n);
	}while(n <= 0);
	for (int i = 1; i<= n; i++){
		s1+=i;
		s2+=(i*i);
		s3*=((2.0*i-1)/(2.0*i));
		s4+=i*(i+1)*(i+2);
	}
	printf("\nS1 = %f", s1/n);
	printf("\nS2 = %f", sqrt(s2));
	printf("\nS3 = %f", s3);
	printf("\nS4 = %d", s4);
	return 0;
}
