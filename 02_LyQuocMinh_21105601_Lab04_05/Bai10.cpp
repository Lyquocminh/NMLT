#include <stdio.h>
int main() {
	int soao, sotien;
	printf("Nhap vao so ao da mua: ");
	scanf("%d", &soao);
	if (soao<=3) sotien = soao*120000;
	else if (soao<=6) sotien = soao*90000;
	else if (soao<=10) sotien = soao*85000;
	else sotien = soao*70000;
	printf("so tien phai tra la: %d$", sotien);
	return 0;
}
