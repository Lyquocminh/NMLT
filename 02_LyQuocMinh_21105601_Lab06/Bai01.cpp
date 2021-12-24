#include <stdio.h>

int main(){
	int sum1 = 0;
	//for
	for (int i = 1; i <= 10; i++)
		sum1+=i;
	printf("\nTong cac so nguyen tu 1 den 10 la: %d", sum1);
	printf("\nTrung binh cong cac so nguyen tu 1 den 10 la: %.1f", 1.0*sum1/10);
	//while
	int i = 1,sum2 = 0;
	while(i <= 10){
		sum2+=i;
		i++;
	}
	printf("\nTong cac so nguyen tu 1 den 10 la: %d", sum2);
	printf("\nTrung binh cong cac so nguyen tu 1 den 10 la: %.1f", 1.0*sum2/10);
	//do-while
	int j = 1, sum3 = 0;
	do{
		sum3+=j;
		j++;
	}while (j <= 10);
	printf("\nTong cac so nguyen tu 1 den 10 la: %d", sum3);
	printf("\nTrung binh cong cac so nguyen tu 1 den 10 la: %.1f", 1.0*sum3/10);
	return 0;
}
