#include<stdio.h>
//Nh?p 1 s? nguy�n n, t�m c�c u?c s? c?a n.
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i=1;
	
	printf("cac uoc so cua n la :");
	while( i <= n){
		if(n % i == 0){
		printf(" %d",i);
		}
	i++;
	}
} 
