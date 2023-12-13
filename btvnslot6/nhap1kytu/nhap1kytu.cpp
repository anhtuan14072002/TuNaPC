#include<stdio.h>
int main(){
	char kytu;
	printf("nhap vao 1 ky tu:");
	scanf("%c", &kytu);
	
	if(kytu >= 'A' &&  kytu <='Z' ){
		printf("ky tu ban nhap la chu hoa");
	}else if(kytu >= 'a' && kytu <= 'z' ){
		printf("ky tu ban vua nhap la chu thuong");
	}else if(kytu>='0' && kytu <= '9' ){
		printf("ky tu ban vua nhap la so");
	}else{
		printf("ky tu ban nhap vao la ky tu dac biet");
	}
} 
