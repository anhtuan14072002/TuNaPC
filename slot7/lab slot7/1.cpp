#include<stdio.h>
//Nh?p 1 s? nguy�n n, in ra c�c s? l? nh? hon n
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i=1;
	
	printf("cac so le nho n la:");
	while(i<n){
		if(i% 2 != 0){
			printf(" %d",i);
		}
	i+=2;
	}
}
