#include<stdio.h>
//Nh?p 1 s? nguy�n n, t�m s? l?n nh?t nh? hon n (ti?m c?n du?i) v� chia h?t cho c? 2 v� 3
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
