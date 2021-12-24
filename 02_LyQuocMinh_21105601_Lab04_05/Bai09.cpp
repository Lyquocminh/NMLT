#include <stdio.h>
int main() {
	char c;
	printf("Nhap vao ky tu: ");
	scanf("%c", &c);
	//viet chuong trinh nhap vao mot ky tu HOA, in ra ky tu cach no 3 ky tu
	if (c>= 'A' && c <= 'Z')
		if (c < 'X') 
			printf("\t\t%c", c + 3);
		else 
			printf("\t\t%c", (c - 88)+ 'A');
	else 
		printf("\t\tKhong hop le");
	return 0;
}
