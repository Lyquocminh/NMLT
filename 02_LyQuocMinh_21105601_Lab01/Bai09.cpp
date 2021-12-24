#include <stdio.h>


int main() {
	int a,b,c,d;
	printf("Nhap phan so thu nhat ");
	scanf("%d/%d", &a,&b);
	printf("Nhap phan so thu hai ");
	scanf("%d/%d", &c, &d);
	printf("Tong cua hai phan so %d/%d va %d/%d la ",a,b,c,d);
	printf("%d/%d", a*d+c*b, b*d);
	return 0;
}
