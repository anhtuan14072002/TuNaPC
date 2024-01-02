#include<stdio.h>
#include<string.h>

int main(){
	char s[20];
	printf("nhap vao 1 chuoi ky tu: ");
	scanf("%s",s);
	
	int l=strlen(s);
	for(int i=0; i<l;i++){
		char temp = s[i];
		s[i] = s[ l- i- 1];
		s[l -i- 1] = temp;
	}
	printf("chuoi sau khi dao nguoc: %s",s);
}
