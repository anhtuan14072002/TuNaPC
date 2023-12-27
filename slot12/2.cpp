#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so phan tu trong mang: ");
	scanf("%d",&n);
	
	int a[n];
	for(int i=0; i < n; i++){
		printf("phan tu thu %d:",i+1);
		scanf("%d",&a[i]);
	}
	
	int x;
	printf("nhap vao so x:");
	scanf("%d",&x);
	
	int temp;
	for(int i=0; i < n -1; i++){
		for(int j=0;j < n - i - 1; j++){
			if(a[j] > a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i=0; i < n;i++){
		printf("%d\t",a[i]);
	}
	int min;
	for(int i=0; i <n; i++){
		if(a[i] - x <= x ){
			min = a[i];
		}	
	}
	printf("\ngia tri %d gan gia tri cua mang nhat la %d",x,min);
	
}
