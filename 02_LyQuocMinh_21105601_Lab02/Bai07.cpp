#include <stdio.h>
#include <math.h>
int main() {
	int x,y;
	printf("Nhap vao x,y = ");
	scanf("%d%d", &x,&y );
	printf("%f", sqrt(1+x*x*1.0+y*y)/(3+pow((x*1.0+y),2)));
	return 0;
}
