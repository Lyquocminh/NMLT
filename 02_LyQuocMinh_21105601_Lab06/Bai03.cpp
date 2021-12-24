#include <stdio.h>

int main(){
	int n;
	printf("Bang phep nhan cua so: ");
	scanf("%d", &n);
	for (int i =1; i<=10; i++)
		printf("\n%d X %2d = %d", n,i,n*i);
	//while
	int i = 1, n1;
	printf("\nBang phep nhan cua so: ");
	scanf("%d", &n1);
	while(i <= 10){
		printf("\n%d X %2d = %d", n1,i,n1*i);
		i++;
	}
	//do-while
	int j =1, n2;
	printf("\nBang phep nhan cua so: ");
	scanf("%d", &n2);
	do{
		printf("\n%d X %2d = %d", n2, j, n2*j);
		j++;
	}while(j <= 10);
	return 0;
}
