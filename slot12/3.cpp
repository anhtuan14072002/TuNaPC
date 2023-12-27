#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so phan tu trong mang:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n ;i++){
		printf("phan tu thu %d:",i+1);
		scanf("%d",&arr[i]);
	}
	int a,b;
	printf("nhap vao so a:");
	scanf("%d",&a);
	printf("nhap vao so b:");
	scanf("%d",&b);
	
	printf("cac so trong [ %d,%d ]:",a,b);
	for(int i=0; i < n; i++){
		if(arr[i] >= a && arr[i] <= b){
			printf("%d\t",arr[i]);
		}
	}
}
