#include <stdio.h>
int main() {
	//khai bao bien mark va bien reward
	int mark, reward;
	//Nhap vao mark
	printf("Your mark: ");
	scanf("%d", &mark);
	//xet dieu kien, neu mark tren 8 thi reward = 500000
	//neu mark duoi hoac bang 8 thi reward = 0
	reward = mark>8?500000:0;
	//xuat ra reward
	printf("Reward:%d\n", reward);
	getchar(); getchar();
	return 0;
}
