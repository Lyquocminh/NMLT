#include <stdio.h>
int main() {
	int a,b;
	printf("Nhap vao a: ");
	scanf("%d", &a);
	printf("Nhap vao b: ");
	scanf("%d", &b);
	if (a%b==0){
		printf("%d la uoc so cua %d", b,a);
	}else printf("%d khong phai la uoc so cua %d", b,a);
	return 0;
}
