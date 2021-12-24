#include <stdio.h>

int main(){
	int a;
	printf("Nhap vao thang 1-12: ");
	scanf("%d", &a);
	switch(a){
		case (1):
		case (3):
		case (5):
		case (7):
		case (8):
		case (10):
		case (12):
			printf("Month have 31 days");
			break;
		case (2):
			printf("Month have 28 days");
			break;
		case (4):
		case (6):
		case (9):
		case (11):
			printf("Month have 30 days");
		    break;
		default:
			printf("Nhap sai");
	}
	return 0;
}
