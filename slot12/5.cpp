#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so phan tu trong n:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i < n ;i++){
		printf("phan tu thu n %d:",i+1);
		scanf("%d",&arr[i]);
	for(int j=0; j < i;j++){
		if(arr[i]==arr[j]){
			printf("phan tu bi trung. Hay nhap lai. \n");
			i--;
		}
	}
	}
}
