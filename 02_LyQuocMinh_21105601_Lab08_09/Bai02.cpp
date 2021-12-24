#include <stdio.h>
int fibo (int x){
	int t1 = 1, t2 = 1, f = 1;
	for (int i = 3; i <= x; i++){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return f;
}
int main() {
	int n;
	do {
		printf("Nhap vao so nguyen n = ");
		scanf("%d", &n);
	}while (n<0);
	printf("Fibonaci(%d) = %d", n, fibo(n));
	return 0;
}
