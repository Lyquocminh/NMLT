#include <stdio.h>

int main() {
	int n, giaithua = 1;
	printf("Nhap vao n: ");
	scanf("%d", &n);
	//for
	for (int i = 1; i <= n; i++)
		giaithua*=i;
	printf("n! = %d", giaithua);
	//while
	int n1;
	printf("\n\nNhap vao n1: ");
	scanf("%d", &n1);
	int giaithua1 = 1, i = 1;
	while(i <= n1){
		giaithua1*=i;
		i++;
	}
	printf("n1! = %d", giaithua1);
	//do-while
	printf("\n\nNhap vao n2: ");
	int giaithua2 = 1, j = 1, n2;
	scanf("%d", &n2);
	do{
		giaithua2*=j;
		j++;
	}while (j<=n2);
	printf("n2! = %d", giaithua2);
	return 0;
}
