#include<stdio.h>
#include<string.h>

int main(){
	char s[5][20];
    printf("Nhap vao 5 chuoi ky tu:\n");
    for (int i = 0; i < 5; i++) {
        printf("Chuoi %d: ", i + 1);
        scanf("%s", s[i]);
    }
	char temp[20];
	
	for(int i=0; i<5 ; i++){
		for(int j=0; j<5-i-1;j++){
			if(strcmp(s[j], s[j + 1]) > 0){
				strcpy(temp, s[j]);
				strcpy(s[j], s[j + 1] );
				strcpy(s[j +1 ], temp);
			}
		}
	}
	printf("mang sau khi sap xep la:");
	for (int i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }
}
