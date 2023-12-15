#include<stdio.h>
//T?nh t?ng các ch? s? c?a 1 s? nguyên n
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
	printf(" %d",s);
	printf("%d",i);
}

