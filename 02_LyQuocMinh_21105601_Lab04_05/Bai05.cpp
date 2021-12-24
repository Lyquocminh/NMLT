#include <stdio.h>
#include <math.h>
int main() {
	float a,b,c, delta;
	printf("Phuong trinh ax^2+bx+c = 0");
	printf("Nhap vao a,b,c: ");
	scanf("%f%f%f", &a,&b,&c);
	delta = b*b- 4*a*c;
	if (delta > 0) {
		printf("Phuong trinh co hai nghiem phan biet\n");
		printf("x1 = %f", (-b+sqrt(delta))/2*a);
		printf("\nx2 = %f", (-b-sqrt(delta))/2*a);
	}else if (delta == 0) {
		printf("Phuong trinh co nghiem kep x = %f", -b/(2*a));
	} else printf("Phuong trinh vo nghiem");
	return 0;
}
