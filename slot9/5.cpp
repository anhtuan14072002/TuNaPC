#include<stdio.h>

int main(){
	
	int n;
	int arr[n];
	printf("nhap vao so phan tu n:");
	scanf("%d",&n);
	
	for(int i=0; i < n; i++){
		printf("phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
	 
	int min;
	printf("so duong nho nhat: ");
	for(int i=0; i < n; i++){
		if(arr[i] % 2 == 0 && arr[i] < min){
			min = arr[i];
			printf("%d \t",min);
		}
	}
}
