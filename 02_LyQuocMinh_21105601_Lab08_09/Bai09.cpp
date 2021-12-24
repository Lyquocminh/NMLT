#include <stdio.h>
#include <math.h>
float khoangCach(float x1,float y1,float x2, float y2){
	return sqrt(pow((y1-y2),2)+pow((x1-x2),2));
}

float STamGiac(float a, float b, float c){
	float p = (a+b+c)/2;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
	float x1,y1,x2,y2,x3,y3;
	printf("Nhap vao toa do diem thu nhat: ");
	scanf("%f%f", &x1,&y1);
	printf("Nhap vao toa do diem thu hai: ");
	scanf("%f%f", &x2,&y2);
	printf("Nhap vao toa do diem thu ba: ");
	scanf("%f%f", &x3,&y3);
	float a,b,c;
	a = khoangCach(x1,y1,x2,y2);
	b = khoangCach(x2,y2,x3,y3);
	c = khoangCach(x3,y3,x1,y1);
	if (a+b>c && a+c>b && b+c>a)
		printf("Dien tich tam giac = %f", STamGiac(a,b,c));
	else 
		printf("3 diem ban nhap khong lap duoc tam giac");		
	return 0;
}
