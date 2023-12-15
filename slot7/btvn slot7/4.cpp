#include <stdio.h>
//Cho s? nguyên duong n. Hãy tìm ch? s? d?u tiên c?a n
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
