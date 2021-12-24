#include <stdio.h>

int main() {
	int chuCai = 0, chuSo =0, kyTuKhac =0;
	char c=0;
	printf("Nhap vao chuoi: ");
	do{
		scanf("%c", &c);
		if (c>='0' && c<='9')
			chuSo++;
		else if ((c>='a' && c<='z')||(c>='A'&&c<='Z'))
			chuCai++;
		else 
			kyTuKhac++;
	}
	while (c != 10);
	printf("so luong chu so: %d", chuSo);
	printf("\nso luong chu cai: %d", chuCai);
	printf("\nso luong ky tu khac: %d", kyTuKhac);
	
	int chuCai1 = 0, chuSo1 =0, kyTuKhac1 =0;
	char c1=0;
	printf("\nNhap vao chuoi: ");
	while (c1 != 10){
		scanf("%c", &c1);
		if (c1>='0' && c1<='9')
			chuSo1++;
		else if ((c1>='a' && c1<='z')||(c1>='A'&&c1<='Z'))
			chuCai1++;
		else 
			kyTuKhac1++;
	}
	printf("so luong chu so: %d", chuSo1);
	printf("\nso luong chu cai: %d", chuCai1);
	printf("\nso luong ky tu khac: %d", kyTuKhac1);
	
	int chuCai2 = 0, chuSo2 =0, kyTuKhac2 =0;
	char c2=0;
	printf("\nNhap vao chuoi: ");
	for (;c2 != 10;){
		scanf("%c", &c2);
		if (c2>='0' && c2<='9')
			chuSo2++;
		else if ((c2>='a' && c2<='z')||(c2>='A'&&c2<='Z'))
			chuCai2++;
		else 
			kyTuKhac2++;
	}
	printf("so luong chu so: %d", chuSo2);
	printf("\nso luong chu cai: %d", chuCai2);
	printf("\nso luong ky tu khac: %d", kyTuKhac2);
	return 0;
	
}
