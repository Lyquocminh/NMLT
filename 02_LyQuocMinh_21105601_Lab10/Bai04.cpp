#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void XuatMang(int x[], int n){
	printf("\nGia tri cua mang la: ");
	for(int i=0; i<n; i++)
		printf("\t%d", x[i]);
}
void xuatSoNgTo(int a[], int n){
	printf("\nCac so nguyen to co trong mang la: ");
	for (int i = 0; i < n; i++){
		int j = 2;
		while (j < a[i]){
			if (a[i] % j == 0)
				break;
			j++;
		}
		if (j == a[i])
			printf("\t%d", a[i]);
	}
}
void xuatPtuTheoViTri (int a[], int n){
	int x,y;
	printf("\nXuat cac gia tri cua mang tu vi tri x den y");
	do{
		printf("\nNhap vi tri x (0 <= x < n-1): ");
		scanf("%d", &x);
		printf("Nhap vi tri y (x < y < n): ");
		scanf("%d", &y);
	}while (x < 0 || x >= n-1 || y < x || y >= n);
	printf("Cac ptu tu vi tri %d den %d la: ", x,y);
	for (int i = 0; i < n; i++)
		if (i >= x && i <= y)
			printf("\t%d", a[i]);
}
void XuatGtriNamTrongKhoang(int x[], int n){
	int a,b;
	printf("\nXuat gia tri cua mang nam trong khoang [a,b]: ");
	printf("\nNhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	printf("Cac ptu co gia tri nam trong khoang [%d,%d] la: ", a,b);
	for (int i = 0; i<n; i++)
		if (x[i] >= a && x[i] <= b )
			printf("\t%d", x[i]);
}
float TBC_cua_mang(int x[], int n){
	int sum=0;
	for (int i = 0; i < n; i++)
		sum+=x[i];
	return (float)sum/n;
}
void themGiaTri (int a[], int &n){
	int x,p;
	printf("\nThem vao mang gia tri X tai vi tri P");
	printf("\nNhap vao gia tri X: ");
	scanf("%d", &x);
	printf("Nhap vao vi tri P: ");
	scanf("%d", &p);
	n = n+1;
	for (int i = n - 1; i >= p; i--)
		a[i]=a[i-1];
	a[p] = x;
	XuatMang(a,n);
}
void xoaGiaTri (int a[], int &n){
	int p;
	printf("\nNhap vao vi tri can xoa: ");
	scanf("%d", &p);
	for (int i = p; i < n; i++)
		a[i]=a[i+1];
	n = n -1;
	XuatMang(a,n);
}
void timGiaTriTrongMang (int a[], int n){
	int x;
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d", &x);
	int i = 0;
	for (; i < n; i++)
		if (a[i] == x){
			printf("Gia tri can tim o vi tri thu %d trong mang", i);
			break;
		}
	if (i == n)
		printf("Gia tri can tim khong co trong mang");
}
int demSoPtuChiaHetCho4_coTanCungLa6(int x[], int n){
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (x[i]%4==0 && x[i]%10==6)
			dem++;
	return dem;
}
void gapDoiPtuLe(int x[], int n){
	for (int i = 0; i < n; i++)
		if (x[i]%2!=0)
			x[i]*=2;
	XuatMang(x,n);
}
int main(){
	srand(time(NULL));
	int n;
	printf("Nhap vao n (n > 0): ");
	scanf("%d", &n);
	int x[n];
	for (int i = 0; i < n; i++)
		x[i] = -50 + rand()%(-50-50);
	XuatMang(x,n);
	printf("\n--------------------------");
	xuatSoNgTo(x,n);
	printf("\n--------------------------");
	XuatGtriNamTrongKhoang(x,n);
	printf("\n--------------------------");
	xuatPtuTheoViTri(x,n);
	printf("\n--------------------------");
	printf("\nTrung binh cac gia tri cua mang la: %f", TBC_cua_mang(x,n));
	printf("\n--------------------------");
	int dem = demSoPtuChiaHetCho4_coTanCungLa6(x,n);
	printf("\nSo phan tu chia het cho 4 va co tan cung la 6: %d", dem);
	printf("\n--------------------------");
	printf("\nSau khi thay cac ptu le bang 2 lan gia tri cua no");
	gapDoiPtuLe(x,n);
	printf("\n--------------------------");
	themGiaTri(x,n);
	printf("\n--------------------------");
	xoaGiaTri(x,n);
	printf("\n--------------------------");
	timGiaTriTrongMang(x,n);
	return 0;
}
