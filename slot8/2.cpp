#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int s =0;
	
	for(int i=1 ; i<n; i++){
		if(n % i == 0){
			s+=i;
		}
	}if(n == s){
	printf("Tong cac uoc so bang :%d \n%d la so so hoan hao",n,s);
	}else{
		printf("%d khong phai so hoan hao",n);
	}
}
