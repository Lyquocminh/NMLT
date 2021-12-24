#include <stdio.h>
int main() {
	int a,b,c,max;
	printf("Nhap vao ba so: ");
	scanf("%d%d%d", &a,&b,&c);
	max = a;
	if (max < b) 
		max = b;
	if (max < c) 
	    max = c;
	printf ("So lon nhat la: %d", max);
	return 0;
}
