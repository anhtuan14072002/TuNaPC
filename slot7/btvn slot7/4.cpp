#include <stdio.h>
//Cho s? nguy�n duong n. H�y t�m ch? s? d?u ti�n c?a n
int main(){
	
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i;
	
	while(n>0){
		i = n %10;
		n = n /10;
	}
	printf("chu so dau tien cua n la :%d",i);
}
