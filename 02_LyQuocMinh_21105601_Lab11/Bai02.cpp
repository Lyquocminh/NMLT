#include <stdio.h>

void nhapMang (int a[], int &n){
	do{
		printf("Nhap vao so ung cu vien (>= 0, <= 10): ");
		scanf("%d", &n);
	}while (n < 0 || n > 10);
	for (int i = 0; i < n; i++){
		do{
			printf("So phieu bau cua ung cu vien thu %d ( >= 0, <= 10000): ",i+1 );
			scanf("%d", &a[i]);
		}while (n < 0 || n > 10000);
	}
}
int tongPhieuBau(int a[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum+=a[i];
	return sum;
}
void tiLePhieuBau (int a[], int n, float b[]){
	for (int i = 0; i < n; i++)
		b[i]= a[i]*1.0/tongPhieuBau(a,n);
	printf("Ti le phan tram phieu bau: ");
	for (int i = 0; i < n; i++)
		printf("\nUng cu vien %d: %.2f %%", i+1, b[i]*100);
}
void timNguoiThangCu(int a[], int n, float b[]){
	int max = 0;
	for (int i = 0; i < n; i++)
		if (b[max] < b[i])
			max = i;
	printf("\nSo phieu bau cua nguoi thang cu: %d", a[max]);
	printf("\nTi le phan tram tuong ung: %.2f %%", b[max]*100);
}
int main(){
	int a[10], n;
	nhapMang(a,n);
	float b[n];
	tiLePhieuBau(a,n,b);
	printf("\n-------------------------");
	timNguoiThangCu(a,n,b);
	return 0;
}
