#include <stdio.h>

int main() {
	int a;
	printf("Nhap vao so nguyen 1 - 7: ");
	scanf("%d", &a);
	switch (a){
		case (1):
			printf("\tMonday");
			break;
		case (2):
			printf("\tTuesday");
			break;
		case (3):
			printf("\tWednesday");
			break;
		case (4):
			printf("\tThursday");
			break;
		case (5):
			printf("\tFriday");
			break;
		case (6):
			printf("\tSaturday");
			break;
		case (7):
			printf("\tSunday");
			break;
		default:
			printf("Nhap sai");
	}
	return 0;
}
