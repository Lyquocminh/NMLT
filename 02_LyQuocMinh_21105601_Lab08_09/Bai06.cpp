#include <stdio.h>

int kt(int ngay, int thang, int nam){
	int max = 31;
	if (ngay < 1 || ngay > 31 || thang < 1 || thang > 12)
		return 0;
	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		max = 30;
	else if (thang == 2){
		if (nam % 400 == 0 || (nam%4==0 && nam%100!=0)) 
			max = 29;
		else max = 28;
	}
	return ngay <= max;
}
int main(){
	int ngay,thang,nam;
	printf("Nhap vao ngay, thang, nam: ");
	scanf("%d%d%d", &ngay,&thang,&nam);
	if (kt(ngay,thang,nam))
		printf("Hop le");
	else printf("Khong hop le");
	return 0;
}
