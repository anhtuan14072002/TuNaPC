#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so phan tu co trong mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n;i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	
	int temp;
	for(int i=0;i < n; i++){
		for(int j=0;j < n-j-1; j++){
			temp = arr[j];
			arr[j] = arr[n-j-1];
			arr[n-j-1] = temp;
		}
		printf("%d \t",arr[i]);
	}
}
