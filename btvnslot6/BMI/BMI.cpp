#include <stdio.h>
#include <math.h>
int main(){
	float a; // khai bao bien a
	printf("can nang cua ban la bao nhieu:");
	scanf("%f",&a);
	
	float b; // khai bao bien b
	printf("chieu cao cua ban la bao nhieu:");
	scanf("%f",&b);
	
	float BMI = a / (b * b); // khai bao chi so BMI
	printf("chi so BMI cua ban la: %f \n",BMI);
	if(BMI < 18.5){
		printf("tinh trang cua ban la gay");
	}else{
	}
	if(18.5 <= BMI && BMI < 24.9){
		printf("tinh trang cua ban la binh thuong");
	}else{
	} 
	if(25 <= BMI && BMI <29.9){
		printf("tinh trang cua ban thua can \n hay chu y suc khoe nha b ^^");
	}if(!((BMI < 18.5) || (18.5 <= BMI && BMI < 24.9) || (25 <= BMI && BMI <29.9) )){
		printf("tinh trang cua ban la beo phi \n hay chu y suc khoe nha b ^^");
	}
}

