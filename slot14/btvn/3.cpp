#include<stdio.h>

int ingiatrimang(int n, int arr[]){
	for(int i=0; i < n; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
}
int main(){
	int n;
	printf("nhap so luong phan tu co trong mang:");
	scanf("%d",&n);
	int arj[n];
	ingiatrimang(n ,arj);
	printf("cac phan tu co trong mang la:");
	for(int i=0; i < n;i++){
		printf("%d\t",arj[i]);
	}
}
