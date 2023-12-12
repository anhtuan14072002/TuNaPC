#include <stdio.h>
#include <math.h>
int main(){
	
	int a; // so thu nhat
	printf("nhap so a=");
	scanf("%d",&a);
	
	int b; // so thu hai
	printf("nhap so b=");
	scanf("%d",&b);
	
	int c; //so thu ba
	printf("nhap so c=");
	scanf("%d",&c);
	
	printf("phuong trinh la: %dx^2 + %dx + %d =0 \n",a,b,c);
	
	int d = b*b -4*a *c; // khai báo delta
	float  x1 = (-b + sqrt(d))/2*a; // nghiem thu nhat
	float x2 = (-b - sqrt(d))/2*a; // nghiem thu hai
	
	if(d>=0){
		printf("nghiem thu nhat = %f \n",x1);
		printf("nghiem thu hai = %f",x2);
	}else{
		printf("phuong trinh vo nghiem");
	}
}
