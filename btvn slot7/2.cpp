#include<stdio.h>
//Nh?p 2 s? a,b. T�m u?c chung l?n nh?t v� b? chung nh? nh?t c?a a v� b
int main(){
	
	int a;
	printf("nhap vao so a:");
	scanf("%d",&a);
	
	int b;
	printf("nhap vao so b:");
	scanf("%d",&b);
	
	int i = 1;
	int ucln = 1;
	
	while(i <= a && i <= b){
		if(a % i == 0 && b % i == 0){
			ucln = i; 
		}
		i++;
	}	
	printf("uoc chung lon nhat cua %d va %d la: %d \n ",a,b ,ucln);
	
	i=1;
	int bcnn = 1;
	
	while(i <= a && i <= b){
		if(i % a==0 && i % b==0){
			bcnn = i;
		}
		i++;
	}
	printf("boi chung nho nhat cua %d va %d la: %d ",a,b ,bcnn);
}
