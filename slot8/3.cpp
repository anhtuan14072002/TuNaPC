#include<stdio.h>
#include<math.h>

int main(){
	int n;

	for(;;){
		printf("nhap vao so n:");
		scanf("%d",&n);
		
		if(n >= 1 && n <= 100){
			printf("so da hop le");
			break;
		}else{
		printf("so khong hop le \n");
		}
	}
}
