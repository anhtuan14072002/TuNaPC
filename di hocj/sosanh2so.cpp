#include <stdio.h>

int  main(){
	int a,b;
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	if(a>b){
		printf("a la so lon nhat");
	}else if(a<b){
		printf("b la so lon nhat");
	}else{
		printf("2 so bang nhau");
	};
}
