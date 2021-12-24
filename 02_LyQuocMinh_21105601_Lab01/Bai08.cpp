#include <stdio.h>


int main() {
	int a, b,c;
	printf("Nhap vao so giay: ");
	scanf("%d", &a);
	b = a%3600;
	c = b%60;
	printf("H:M:S - %d:%d:%d", a/3600, b/60, c/1);
	return 0;
}
