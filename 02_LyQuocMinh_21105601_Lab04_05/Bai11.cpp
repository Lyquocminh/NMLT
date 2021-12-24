#include <stdio.h>
int main() {
	int kwhs, tien;
	printf("So luong dien tieu thu (kwhs): ");
	scanf("%d", &kwhs);
	if (kwhs<=100) tien = 950;
	else if (kwhs<=150) tien = 1250;
	else if (kwhs<=200) tien = 1350;
	else tien = 1550;
	printf("So tien phai tra la: %d", tien);
	return 0;
}
