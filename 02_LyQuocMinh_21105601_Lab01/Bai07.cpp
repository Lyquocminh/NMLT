#include <stdio.h>


int main(int argc, char *argv[]) {
	int a, b,c;
	printf("Nhap vao so ngay ");
	scanf("%d", &a);
	printf("\nyears:\t%d", a/365);
	b = a%365;
	printf("\nweeks:\t%d", b/7);
	c = b%7;
	printf("\ndays:\t%d", c); 
	return 0;
}
