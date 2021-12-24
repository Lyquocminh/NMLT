#include <stdio.h>

int main(){
	for (int i = 1; i <= 10; i++){
		printf("\n%c", 179);
		for (int j = 2; j <= 9; j++){
			printf("%d x %2d = %2d %c",j,i,j*i, 179 );
		}
	}
	return 0;
}
