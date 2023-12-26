#include<stdio.h>

int main(){
	
	for(int i=1;i<9;i++){
		for(int j;j<=i;i++){
			if(i==j){
				printf(" ");
			}else{
				printf("*");
			}
			printf("\n");
		}
	}
}
