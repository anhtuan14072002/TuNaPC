#include<stdio.h>
//Nh?p 1 s? nguyên n, tìm các u?c s? c?a n.
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i=1;
	
	while( i <= n){
		if(n % i == 0){
		printf(" %d",i);
		}
	i++;
	}
} 
