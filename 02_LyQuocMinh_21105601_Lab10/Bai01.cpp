#include <stdio.h>
#include <math.h>
void NhapMang(float x[], int &n){
	do {
		printf("Nhap vao so luong ptu (0<n<=100): ");
		scanf("%d", &n);
	}while(n<0||n>100);
	for (int i=0; i<n; i++){
		printf("a[%d] = ", i);
		scanf("%f", &x[i]);
	}
}
void XuatMang(float x[], int n){
	printf("Gia tri cua mang la: ");
	for(int i=0; i<n; i++){
		printf("%f\t", x[i]);
	}
	printf("\n");
}
float TBC_cua_mang(float x[], int n){
	float sum=0;
	for (int i = 0; i < n; i++)
		sum+=x[i];
	return sum/n;
}
float TongBinhPhuong(float x[], int n){
	float sum = 0;
	for (int i = 0; i < n; i++)
		sum+=x[i]*x[i];
	return sum;
}
float phuongSai (float x[], int n){
	return TongBinhPhuong(x, n)/n-pow(TBC_cua_mang(x,n),2);
}
float doLechChuan (float x[], int n){
	return sqrt(phuongSai(x,n));
}

int main(){
	float x[100];
	int n;
	NhapMang(x,n);
	XuatMang(x,n);
	printf("\nGia tri trung binh cua mang: %f", TBC_cua_mang(x,n));
	printf("\nTong binh phuong: %f", TongBinhPhuong(x,n));
	printf("\nPhuong sai: %f", phuongSai(x,n));
	printf("\nDo lech chuan: %f", doLechChuan(x,n));
	return 0;
}

