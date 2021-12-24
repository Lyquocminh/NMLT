#include <stdio.h>
int main() {
	long day;
	printf("Nhap vao so ngay: ");
	scanf("%d", &day);
	printf("So tien phai tra: %d", (day/7)*700000+(day%7)*120000);
	return 0;
}
