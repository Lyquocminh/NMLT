#include <stdio.h>
int main() {
	float diem10, diem4;
	printf("Nhap vao diem (thang diem 10) ");
	scanf("%f", &diem10);
	if (diem10 >= 0 && diem10 <= 10) {
	    diem4 = diem10/2.5;
	    if (diem4 < 1) printf("Diem theo thang 4 la %.2f - Diem F", diem4);
	    else if (diem4 < 1.5) printf("Diem theo thang 4 la %.2f - Diem D", diem4);
	    else if (diem4 < 2) printf("Diem theo thang 4 la %.2f - Diem D+", diem4);
	    else if (diem4 < 2.5) printf("Diem theo thang 4 la %.2f - Diem C", diem4);
	    else if (diem4 < 3) printf("Diem theo thang 4 la %.2f - Diem C+", diem4);
	    else if (diem4 < 3.5) printf("Diem theo thang 4 la %.2f - Diem B", diem4);
	    else if (diem4 < 4) printf("Diem theo thang 4 la %.2f - Diem B+", diem4);
	    else printf("Diem theo thang 4 la %.2f - Diem A", diem4);
    } else printf("Khong hop le");
    return 0;
}

