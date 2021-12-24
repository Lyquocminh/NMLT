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
void xuatMang (int a[], int n){
	printf("\n%d gia tri dau tien cua day fibonacci la: ", n);
	for (int i = 0; i < n; i++)
		printf("\t%d", a[i]);
}
int main(){
	int n;
	do{
		printf("Nhap vao n (n>0): ");
		scanf("%d", &n);
	}while (n<=0);
	int a[n];
	for (int i = 0; i < n; i++)
		a[i]= fibo(i+1);
	xuatMang(a,n);
	return 0;
}
