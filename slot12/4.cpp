#include<stdio.h>

int main(){
	int n;
	printf("nhap so luong phan tu trong mang:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i < n;i++){
		printf("phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap vao so x:");
	scanf("%d",&x);
	
	for(int i=0; i < n; i++){
		if(-x <= arr[i] && x >= arr[i]){
			printf("%d\t",arr[i]);
		}
	}
}
