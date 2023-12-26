#include<stdio.h>

int main(){
	
	int n;
	int arr[n];
	printf("nhap vao so phan tu trong mang:");
	scanf("%d",&n);
	
	for(int i=0; i< n ;i++){
		printf("phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("so le cuoi cung la :");
	for(int i = n-1; i>=0; i--){
		if(arr[i] %2 !=0){
			printf("%d \t",arr[i]);
		break;
		}
	}
}
