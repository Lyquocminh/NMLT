#include <stdio.h>

int kt_soNguyenTo(int a){
	for (int i = 2; i < a; i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int n;
	do{
		printf("Nhap vao n (n >= 2): ");
		scanf("%d", &n);
	}while(n<2);
	printf("Cac so nguyen to tu 2 den %d la: ", n);
	for(int i = 2; i<=n; i++){
		if(kt_soNguyenTo(i)==1)
			printf("\t%d", i);
	}
	return 0;
}
