#include <stdio.h>
#include <math.h>
void PTBac2(){
	float a,b,c, delta;
	printf("\nPhuong trinh ax^2+bx+c = 0");
	printf("\nNhap vao a,b,c: ");
	scanf("%f%f%f", &a,&b,&c);
	delta = b*b- 4*a*c;
	if (delta > 0) {
		printf("Phuong trinh co hai nghiem phan biet\n");
		printf("x1 = %f", (-b+sqrt(delta))/2*a);
		printf("\nx2 = %f", (-b-sqrt(delta))/2*a);
	}else if (delta == 0) {
		printf("Phuong trinh co nghiem kep x = %f", -b/(2*a));
	} else printf("Phuong trinh vo nghiem");
}
void soTienGuiNganHang(){
	int namGui;
	float lai, sotienGui;
	do{
		printf("Nhap vao so tien gui (>0): ");
		scanf("%f", &sotienGui);
		printf("Lai suat nam (0% - 1%%): ");
		scanf("%f", &lai);
		printf("So nam gui (so nguyen duong): ");
		scanf("%d", &namGui);
	}while (sotienGui <= 0 || lai < 0 || lai > 1 || namGui <= 0);
	float tongLaiSuat = pow(sotienGui*(1+lai), namGui);
	printf("\nSo tien co duoc sau thoi gian gui ngan hang: %f", tongLaiSuat);
}
int main(){
	int a;
	do{
		printf("\n=========MENU=======");
		printf("\n1-Phuong trinh bac 2");
		printf("\n2-Tinh lai suat ngan hang");
		printf("\n3-Thoat");
		printf("\nChon chuc nang: ");
		scanf("%d", &a);
		switch (a){
			case 1:
				PTBac2();
				break;
			case 2:
				soTienGuiNganHang();
				break;
			case 3:
				printf("Thoat khoi chuong trinh");
				break;
			default:
				printf("Nhap sai");
		}
		
	}while (a!=3);
}

