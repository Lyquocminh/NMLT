#include <stdio.h>
int main () {
	int a,b,c;
	printf("Nhap vao ba canh a,b,c: ");
	scanf("%d%d%d", &a,&b,&c);
	if (a+b>c && a+c>b && b+c>a){
		printf("Ba canh a,b,c co the lap duoc tam giac ");
		if (a==c||a==b||b==c){
			if(a==b && b==c) printf("va la tam giac dieu");
			else printf("va la tam giac can");
		}else printf("va la tam giac thuong");
	}else printf("Ba canh a,b,c khong the lap duoc tam giac");
	return 0;
}
