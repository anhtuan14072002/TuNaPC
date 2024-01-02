#include<stdio.h>
#include<string.h>

int main(){
	char s[20];
	printf("nhap vao 1 chuoi ky tu: ");
	scanf("%s",s);
	int l= strlen(s);
	
	for(int i=0; i<l;i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			s[i]-=('a'-'A');
		}
	}
	printf("chuoi ky tu sau khi chuyen thanh chu hoa la: %s",s);
}
