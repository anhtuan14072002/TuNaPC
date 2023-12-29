#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so phan tu trong mang:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i < n; i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	int xh = 0; 
	int xhmax = 0;
    int nn ; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[j] == arr[i]){
                xh++;
            }
        } 
        if(xh > xhmax){
            xhmax = xh;
            nn = arr[i];  
        }
    }
	printf("gia tri xuat hien nhieu nhat trong mang la:%d",nn);
}
