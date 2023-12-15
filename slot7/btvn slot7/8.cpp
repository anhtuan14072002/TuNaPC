#include <stdio.h>
//Nh?p vào 1 s? n ( s? t? nhiên). Tìm s? d?ng ? v? trí th? n trong dãy s? Fibonaci.
int main(){
	
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int a=0;
	int b=1;
	int c=0;
	int i=1;
	while(i<n){
		c=a+b;
		a=b;
		b=c;
		i++;
	}printf("so dung o vi thi thu %d là: %d",n,c);
}

