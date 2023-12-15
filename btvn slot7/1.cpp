#include<stdio.h>
//Nh?p 1 s? n, tìm các u?c và tính t?ng u?c c?a n
int main(){
	int n;
	printf("nhap vao so n :");
	scanf("%d",&n);
	
	int i = 1;
	int S=0;
	printf("uoc cua n la: ",i);
	while(i <= n){
		if(n % i ==0){
			printf(" %d",i);
				S = S + i;
		}
		i++;
	}
	printf("\nTong cac uoc cua %d la: %d\n", n, S);
}
