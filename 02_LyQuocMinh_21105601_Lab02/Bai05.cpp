#include <stdio.h>
#include <math.h>
int main() {
	int a,b;
	printf("Nhap so nguyen a ");
	scanf("%d", &a);
	printf("Nhap so nguyen b ");
	scanf("%d", &b);
	printf("    %d", a);
	printf("\n  x %d", b);
	printf("\n ------");
	int x = (b%10)*a;
	int y = (b%100/10)*a;
	int z = (b/100)*a;
	printf("\n   %d",x );
	printf("\n  %d",y );
	printf("\n %d",z );
	printf("\n ------");
	printf("\n %d", z*100+y*10+x );
	return 0;
	
}
