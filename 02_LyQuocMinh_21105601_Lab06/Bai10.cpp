#include <stdio.h>

int main(){
	char ch;
	int n_am = 0,p_am = 0, ktuKhac = 0;
	printf("Nhap vao chuoi (nhan ENTER de ket thuc): ");
	do{
		scanf("%c", &ch);
		if (ch>='a' && ch <= 'z')
			ch= ch-32;
		if (ch>='A' && ch<= 'Z'){
			switch(ch){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					n_am++;
					break;
				default:
					p_am++;
			}
		}
		else if (ch != 10)
			ktuKhac++;
	}while (ch != '\n');
	printf("so luong nguyen am la: \t\t%d", n_am);
	printf("\nso luong phu am la: \t\t%d", p_am);
	printf("\nso luong cac phim khac la: \t%d", ktuKhac);
	
	char ch1;
	int n_am1 = 0,p_am1 = 0, ktuKhac1 = 0;
	printf("\nNhap vao chuoi (nhan ENTER de ket thuc): ");
	while (ch1 != '\n'){
		scanf("%c", &ch1);
		if (ch1>='a' && ch1 <= 'z')
			ch1= ch1-32;
		if (ch1>='A' && ch1<= 'Z'){
			switch(ch1){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					n_am1++;
					break;
				default:
					p_am1++;
			}
		}
		else if (ch1 != 10)
			ktuKhac1++;
	}
	printf("so luong nguyen am la: \t\t%d", n_am1);
	printf("\nso luong phu am la: \t\t%d", p_am1);
	printf("\nso luong cac phim khac la: \t%d", ktuKhac1);
	
	char ch2;
	int n_am2 = 0,p_am2 = 0, ktuKhac2 = 0;
	printf("\nNhap vao chuoi (nhan ENTER de ket thuc): ");
	while (ch2 != '\n'){
		scanf("%c", &ch2);
		if (ch2>='a' && ch2 <= 'z')
			ch2= ch2-32;
		if (ch2>='A' && ch2<= 'Z'){
			switch(ch2){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					n_am2++;
					break;
				default:
					p_am2++;
			}
		}
		else if (ch2 != 10)
			ktuKhac2++;
	}
	printf("so luong nguyen am la: \t\t%d", n_am2);
	printf("\nso luong phu am la: \t\t%d", p_am2);
	printf("\nso luong cac phim khac la: \t%d", ktuKhac2);
	return 0;
}
