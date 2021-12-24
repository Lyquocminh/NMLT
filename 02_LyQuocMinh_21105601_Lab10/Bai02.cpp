#include <stdio.h>

void NhapMang(int x[], int &n){
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
int tongCacSoChan (int a[], int n){
	int sum=0;
	for (int i=0; i <n; i++)
		if (a[i]%2==0)
			sum+=a[i];
	return sum;
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
void swap(int &a,int &b){
	int tam = a;
	a= b;
	b= tam;
}
void sxTang (int x[],int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++)
			if (x[j] < x[i]) 
				swap(x[j],x[i]);
	}
	XuatMang(x,n);
}
void sxGiam (int x[],int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++)
			if (x[j] > x[i])  
				swap(x[i],x[j]);
	}
	XuatMang(x,n);
}

int main(){
	int n;
	do {
		printf("Nhap vao so luong ptu (0<n<=100): ");
		scanf("%d", &n);
	}while(n<0||n>100);
	int x[n];
	NhapMang(x,n);
	XuatMang(x,n);
	printf("\n------------------------------");
	xuatSoNgTo(x,n);
	printf("\n------------------------------");
	XuatGtriNamTrongKhoang(x,n);
	printf("\n------------------------------");
	xuatPtuTheoViTri(x,n);
	printf("\n------------------------------");
	printf("\nTong cac so chan trong mang la: %d", tongCacSoChan(x,n));
	printf("\n------------------------------");
	themGiaTri(x,n);
	printf("\n------------------------------");
	xoaGiaTri(x,n);
	printf("\n------------------------------");
	timGiaTriTrongMang(x,n);
	printf("\n------------------------------");
	printf("\nSau khi sap xep tang");
	sxTang(x,n);
	printf("\n------------------------------");
	printf("\nSau khi sap xep giam");
	sxGiam(x,n);
	return 0;
}
