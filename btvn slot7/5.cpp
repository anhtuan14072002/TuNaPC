#include <stdio.h>
//T�m ch? s? l?n nh?t c?a s? nguy�n duong n
int main(){
	
	int n;
	printf("nhap vao so :");
	scanf("%d",&n);
	
	int i;
	int max = 0;
	
	while( n > 0){
		i = n % 10;
		n = n/10;
		if(i > max){
		max = i;
		}
	}printf("chu so lon nhat cua so nguyen n la: %d",max);
}
