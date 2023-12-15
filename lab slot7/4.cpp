#include <stdio.h>
//Nh?p 1 s? nguyên n, tìm s? d?o ngu?c c?a n.
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int a;
	
	while(n>0){
		a = n % 10;
		n = n/10;
		printf("%d",a);
	}
}
