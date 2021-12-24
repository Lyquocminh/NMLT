#include <stdio.h>
int main () {
	float c;
	printf ("Nhap vao nhiet do (theo do C): ");
	scanf("%f", &c);
	if (c < 0) printf("Freezing weather");
	else if (c <= 10) printf("Very cold weather");
	else if (c <= 20) printf("Cold weather");
	else if (c <= 30) printf("Normal in Temp");
	else if (c <= 40) printf("Its Hot");
	else printf("Very Hot");
	return 0;
}
