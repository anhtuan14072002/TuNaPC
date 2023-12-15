#include<stdio.h>
//Nh?p 2 s? a,b. Tìm u?c chung l?n nh?t và b? chung nh? nh?t c?a a và b
int main(){
	
	int a;
	printf("nhap vao so a:");
	scanf("%d",&a);
	
	int b;
	printf("nhap vao so b:");
	scanf("%d",&b);
	
	int i = 1;
	int ucln = 1;
	int bcnn=a*b;
	
	while(i <= a && i <= b){
		if(a % i == 0 && b % i == 0){
			ucln = i; 
		}
		i++;
	}	
	printf("uoc chung lon nhat cua %d va %d la: %d \n ",a,b ,ucln);
	printf("boi chung nho nhat cua %d va %d la: %d ",a,b ,bcnn);
}
