#include <stdio.h>
#include <conio.h>
int main() {
	char c;
	printf("\nNhap vao diem: ");
	scanf("%c", &c);
	switch(c){
		case ('E'):
			printf("Excellent");
			break;
		case ('V'):
			printf("Very Good");
			break;
		case ('G'):
			printf("Good");
			break;
		case ('A'):
			printf("Average");
			break;
		case ('F'):
			printf("Fall");
			break;
		default:
			printf("Khong hop le");
	}
	return 0;
}
