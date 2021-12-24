#include <stdio.h>
int main() {
	float dtb;
	printf("Nhap vao diem trung binh: ");
	scanf("%f",&dtb);
	if (dtb>=0&&dtb<=10 ){
	 if (dtb<5) printf("Yeu");
	 else if (dtb<6) printf("Trung binh");
	 else if (dtb<7) printf("Trung binh kha");
	 else if (dtb<8) printf("Kha");
	 else if (dtb<9) printf("Gioi");
	 else if (dtb<=10) printf("Xuat sac");}
	else printf("Nhap sai");
	return 0;
}
