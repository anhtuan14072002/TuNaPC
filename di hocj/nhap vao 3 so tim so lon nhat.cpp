#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap vao so a:");
	scanf("%d",&a);
	printf("nhap vao so b:");
	scanf("%d",&b);
	printf("nhap vao so c:");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("a la so lon nhat");
	}
	else if(b>a && b>c){
		printf("b la so lon nhat");
	}
	else{
		printf("c la so lon nhat");
	}
}
