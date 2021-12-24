#include <stdio.h>
#include <math.h>
int main(){
	printf("Cac so armstrong co 3 chu so: ");
	for (int i = 100; i<=999; i++){
		int dvi = i%10, chuc = (i%100)/10, tram = i/100;
		if (i == pow(dvi,3)+ pow(chuc,3) + pow(tram,3))
			printf("\t%d", i);
	}
	return 0;
}
