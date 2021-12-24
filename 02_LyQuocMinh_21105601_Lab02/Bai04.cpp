#include <stdio.h>
int main () {
	int a,b,c;
	printf("Nhap a =");
	scanf("%d", &a);
	printf("Nhap b =");
	scanf("%d", &b);
	c=a;a=b;b=c;
	printf("a = %d\nb = %d", a,b);
	return 0;
}
