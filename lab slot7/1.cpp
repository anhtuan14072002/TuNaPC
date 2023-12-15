#include<stdio.h>
//Nh?p 1 s? nguyên n, in ra các s? l? nh? hon n
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i=1;
	
	while(i<n){
		if(i% 2 != 0){
			printf(" %d",i);
		}
	i+=2;
	}
}
