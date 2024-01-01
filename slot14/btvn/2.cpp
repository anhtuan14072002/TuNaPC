#include<stdio.h>

int timx(int n , int arr[], int x){
	for(int i = 0;i < n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("nhap vao so x:");
	scanf("%d",&x);
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == x){
			flag=1;
			break;
		}
	}
	if(flag){
		printf("x co xuat hien trong mang");
	}else{
		printf("x khong xuat hien trong mang");
	}
}

int main(){
	int n,x;
	printf("nhap vao so luong phan tu trong mang: ");
	scanf("%d",&n);
	int ary[n];
	timx(n, ary,x);
}
