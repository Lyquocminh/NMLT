#include <stdio.h>
int main(){
	int thang,nam;
	printf("Nhap vao thang, nam: ");
	scanf("%d%d", &thang,&nam);
	if (thang == 2){
		if ((thang%4==0&&thang%100!=0)||(thang%400==0))
		    printf("Thang do co 29 ngay");
		else printf("Thang do co 28 ngay");
	}else if (thang==4||thang==6||thang==9||thang==11)
	          printf("Thang do co 30 ngay");
	else if (thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
	        printf("Thang do co 31 ngay");
	else printf("Nhap sai");
	return 0;
}
