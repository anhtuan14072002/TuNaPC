#include<stdio.h>

int main(){
	int n;
	printf("Nhap vao 1 so nguyen :");
	scanf("%d",&n);
	
	int arr[n];
	
	for(int i=0 ;i < n; i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	int sochancuoicung = 1;
	for(int i=0;i < n; i++){
		if(arr[i] % 2 ==0){
			sochancuoicung = arr[i];
		}
	}
	if(sochancuoicung != 1){
		printf("So chan cuoi cung trong mang la: %d",sochancuoicung);
	}else{
		printf("mang khong co so chan");
	}
}
