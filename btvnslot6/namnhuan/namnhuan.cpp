#include<stdio.h>
#include<math.h>
int main(){
	int a; // khai bao bien a la nam
	printf("nhap nam: ");
	scanf("%d",&a);
	
	if((a % 4 == 0) || ( a % 100 == 0 &&a % 400 == 0)){
		printf("nam %d la nam nhuan",a);
	}else{
		printf("khong phai la nam nhuan ");
	}
}
