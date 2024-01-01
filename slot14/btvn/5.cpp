#include<stdio.h>

int ucln( int n, int arr[]){
	for(int i= 0; i<n; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0 ; i < n - 1; i++){
		for(int j= 0; j < n - i -1; j++){
			if( arr[j] > arr[j +1]){
				int temp = arr[j];
				arr[j] = arr[j +1];
				arr[j +1] = temp;	
				
	int a;			
	for(int i = 0;i<n; i++){
		if(arr[n] % arr[i] ==0){
			a= arr[i];
		}
	}
	return a;
			}
		}
	}
}
int main(){
	int n;
	printf("nhap vao so luong phan tu co trong mang:");
	scanf("%d",&n);
	int arj[n];
	int z = ucln(n , arj);
	printf("ucln trong mang la: %d",z);
}
