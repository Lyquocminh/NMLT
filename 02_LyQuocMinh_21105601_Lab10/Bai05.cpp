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
}
void mangHop (int a[], int m, int b[], int n){
	int x = m+n;
	int c[x];
	for (int i = 0; i < m; i++)
		c[i] = a[i];
	for (int i = m; i < x; i++)
		c[i] = b[i-m];
	sxTang(c,x);
	for (int i = 0; i < x-1; i++){
		if (c[i]==c[i+1]){
			for (int j = i; j < x-1; j++)
				c[j]=c[j+1];
			x--;
			i--;
		}
	}
	XuatMang(c,x);
	
}
void mangGiao (int a[], int m, int b[], int n){
	int x = 0;
	int c[x];
	if (m <= n){
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				if (a[i] == b[j])
					c[x++]=a[i];
	}
	else {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				if (b[i] == a[j]){
					c[x]=b[i];
					x++;
				}
	}
	sxTang(c,x);
	for (int i = 0; i < x-1; i++){
		if (c[i]==c[i+1]){
			for (int j = i; j < x-1; j++)
				c[j]=c[j+1];
			x--;
			i--;
		}
	}
	XuatMang(c,x);
}
void mangHieu(int a[], int m, int b[], int n){
	for (int i = 0; i < m-1; i++){
		if (a[i]==a[i+1]){
			for (int j = i; j < m-1; j++)
				a[j]=a[j+1];
			m--;
			i--;
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++)
			if (a[i]==b[j]){
				for (int k = i; k < m-1; k++)
					a[k]=a[k+1];
				m = m -1;
			}
	}
	XuatMang(a,m);
}
int main(){
	int a[100], b[100], m,n;
	NhapMang(a,m);
	NhapMang(b,n);
	printf("\nTap hop A: ");
	XuatMang(a,m);
	printf("\nTap hop B: ");
	XuatMang(b,n);
	printf("\n----------------------------");
	printf("\nGiao cua A va B la: ");
	mangGiao(a,m,b,n);
	printf("\n----------------------------");
	printf("\nHop cua A va B la: ");
	mangHop(a,m,b,n);
	printf("\n----------------------------");
	printf("\nA hieu B: ");
	mangHieu(a,m,b,n);
	return 0;
}
