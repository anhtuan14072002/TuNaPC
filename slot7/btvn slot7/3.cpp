#include<stdio.h>
//T?nh t?ng c�c ch? s? c?a 1 s? nguy�n n
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i;
	int s=0;

	while(n > 0){
		i = n % 10;
		n = n/10;
		s = s+i; 
	}
	printf("Tong cac chu so cua n la: %d",s);
}

