#include<stdio.h>

int main(){
	
	for(int a=0;a<6;a++){
		printf("*\n");
		for(int b=0;b<a;b++){
			printf("* ");
			for(int c=0;c<2;c++){
				printf("*");
			}
		}
	}
}
