#include <stdio.h>
//Nh?p v�o 1 s? n ( s? t? nhi�n). T�m s? d?ng ? v? tr� th? n trong d�y s? Fibonaci.
int main(){
	
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);

	int a=0;
	int b=1;
	int c=0;
	int i=1;
	
	while(i<n){
		c = a+b ;
		printf("%d",c);
	}i++;	
}
