#include <stdio.h>
#include <math.h>

void daySo(int x,int a[]){
	for (int i = 0; i < 10; i++){
		a[i]= x/pow(10,9-i);
		a[i]= a[i]%10;
	}
}
int tongDaySo (int a[]){
	int sum = a[9];
	for (int i = 0; i < 9; i++)
		sum+= a[i]*(10-i);
	return sum;
}
int main (){
	int a[10],x;
	printf("ISBN Validator");
	printf("\n==================");
	do{
		printf("\nNhap vao so co 10 chu so (0 to quit): ");
		scanf("%d", &x);
		daySo(x,a);
		if (x == 0)
			printf("Have a nice day!");
		else if (tongDaySo(a)%11 == 0)
			printf("This is a valid ISBN");
		else 
			printf("This is not a valid TSBN");
	}while (x != 0);
	return 0;
}
