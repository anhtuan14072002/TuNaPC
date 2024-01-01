#include<stdio.h>

int daonguoc(int n, int arr[]){
	for(int i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n/2;i++){
		int temp = arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = temp;
	}
}
int main(){
	int n;
	printf("nhap vao so luong phan tu co trong mang:");
	scanf("%d",&n);
	int arj[n];
	daonguoc(n, arj);
	printf("mang dao nguoc la:");
	for(int i=0; i<n;i++){
		printf("%d\t",arj[i]);
	}
}
