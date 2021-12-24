#include <stdio.h>

int ucln(int a, int b){
	for (int i = a; i > 0; i--)
		if (a%i == 0 && b%i == 0)
			return i;
}
int bcnn(int a, int b){
	return a*b/ucln(a,b);
}
int main(){
	int a,b;
	do{
		printf("Nhap a va b (a,b > 0): ");
		scanf("%d%d", &a,&b);
	}while(a<= 0 || b <= 0);
	printf("Uoc chung lon nhat cua %d va %d la %d", a,b,ucln(a,b));
	printf("\nBoi chung nho nhat cua %d va %d la %d", a,b,bcnn(a,b));
	return 0;
}
