#include <stdio.h>
#include <ctype.h>
int main () {
	char c,b;
	printf("Nhap vao mot ky tu in thuong ");
	scanf("%s", &c);
	printf("ky tu IN HOA tuong ung la: %c", toupper(c));
	printf("\nNhap vao mot ky tu IN HOA ");
	scanf("%s", &b);
	printf("Ky tu in thuong tuong ung la: %c", tolower(b));	
	return 0;
}
