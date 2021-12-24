#include <stdio.h>

void NhapMang(int x[], int &n){
	do{
		printf("Nhap vao so luong phan tu (0 < n <= 100): ");
		scanf("%d", &n);
	}while (n <= 0 || n > 100);
	for (int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &x[i]);
	}
}
void XuatMang(int x[], int n){
	printf("\nGia tri cua mang la: ");
	for(int i=0; i<n; i++)
		printf("\t%d", x[i]);
}
int main(){
	int a[100], w[100], m,n;
	NhapMang(a,m);
	NhapMang(w,n);
	int y[m-n+1];
	for (int i = 0; i < m-n+1; i++){
		int sum = 0;
		for (int j = 0; j < n; j++)
			sum+=a[i+j]*w[j];
		y[i]=sum;
	}
	XuatMang(y,m-n+1);
	return 0;
}
