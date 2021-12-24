#include <stdio.h>
int main() {
	char c;
	printf("Nhap vao ky tu: ");
	scanf ("%c", &c);
	if ((c >= 'A' && c <= 'Z') || ( c >= 'a' && c <= 'z'))
	     printf("ky tu ban vua nhap la chu cai");
	else if (c >= '0' && c <= '9') printf("Ky tu ban vua nhap la chu so");
	else printf("ky tu ban vua nhap la ky tu dac biet");
	return 0;
}
