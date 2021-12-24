#include <stdio.h>
#include <math.h>
int main() {
	int n;
	printf("Nhap vao so nguyen n: ");
	scanf("%d", &n);
	for (int i = 1; i <= abs(n); i++){
		if (n%i==0) 
			printf("%d\t", i);
	}
	int n1, i =1;
	printf("\nNhap vao so nguyen n: ");
	scanf("%d", &n1);
	while( i <= abs(n1)){
		if (n1%i==0)
			printf("%d\t", i);
		i++;
	}
	int n2, j =1;
	printf("\nNhap vao so nguyen n: ");
	scanf("%d", &n2);
	do{
		if (n2%j==0)
			printf("%d\t", j);
		j++;
	}while(j <= abs(n2));
	return 0;
}
