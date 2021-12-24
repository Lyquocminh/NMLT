#include <stdio.h>
int main() {
	int sl, kq;
	printf("Nhap vao so luong dia: ");
	scanf("%d", &sl);
	if (sl > 10) {
		kq = 5000*sl-(5000*sl)/10;
	}else kq = 5000*sl;
	printf("So tien phai tra la: %d", kq);
	return 0;
}
