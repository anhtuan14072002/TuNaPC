#include <stdio.h>

int main(){
	int num;
	printf("nhap num:");
	scanf("%d", &num);
	int r = num % 2;
	if(r==0){
		printf("Num la so chan");
	} else{
		printf("num la so le");
	}
}
