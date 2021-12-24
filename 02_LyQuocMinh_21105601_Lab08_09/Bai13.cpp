#include <stdio.h>

void nhapSoNgDuong(int &n){
	do{
		printf("Nhap vao so nguyen duong n (n > 0): ");
		scanf("%d", &n);
	}while (n <= 0);
}
void fibo (int x){
	int t1 = 1, t2 = 1, f = 1;
	printf("Day fibonacci: 1, ");
	for (int i = 2; i <= x; i++){
		printf("%d, ", f);
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
}
int kt_ngaythangnam(int ngay, int thang, int nam){
	int max = 31;
	if (ngay < 1 || ngay > 31 || thang < 1 || thang > 12)
		return 0;
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		max = 30;
	else if (thang == 2){
		if (nam % 400 == 0 || (nam%4==0 && nam%100!=0)) 
			max = 29;
		else max = 28;
	}
	return ngay <= max;
}
int main(){
	int a;
	do{
		printf("\n\t==============MENU============");
		printf("\n1-Nhap n va in ra n so hang dau tien cua day fibonacci");
		printf("\n2-Nhap vao ngay thang nam va kiem tra du lieu nhap co hop le khong");
		printf("\n3-Thoat");
		printf("\nChon chuc nang: ");
		scanf("%d", &a);
		switch (a){
			case 1:
				int n;
				nhapSoNgDuong(n);
				fibo(n);
				break;
			case 2:
				int ngay,thang,nam;
				printf("Nhap vao ngay, thang, nam: ");
				scanf("%d%d%d", &ngay, &thang,&nam);
				if (kt_ngaythangnam(ngay,thang,nam))
					printf("\nHop le");
				else
					printf("\nKhong hop le");
				break;
			case 3:
				printf("\nThoat khoi chuong trinh");
				break;
			default:
				printf("\nNhap sai");
		}
	}while (a!=3);
	return 0;
}
