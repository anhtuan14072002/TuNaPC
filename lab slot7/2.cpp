#include<stdio.h>
//Nh?p 1 s? nguyên n, tìm s? l?n nh?t nh? hon n (ti?m c?n du?i) và chia h?t cho c? 2 và 3
int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int i = n- 1;
	
	while(i < n){
		if(i % 2 == 0 && i % 3 == 0 ){
		printf(" %d",i);
		break;
		}
		i--;
	}
}
