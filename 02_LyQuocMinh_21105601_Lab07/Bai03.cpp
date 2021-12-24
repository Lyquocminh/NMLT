#include <stdio.h>

int main(){
	int sta, end;
	printf("So bat dau: ");
	scanf("%d", &sta);
	printf("So ket thuc: ");
	scanf("%d", &end);
	printf("Cac so hoan hao tu %d den %d la: ", sta, end);
	for (int i = sta; i<=end; i++){
		int tongUoc = 0;
		for (int j = 1; j< i; j++)
			if(i%j == 0)
				tongUoc+=j;
		if (i == tongUoc && i != 0)
			printf("\t%d", i);
	}
	return 0;
}
