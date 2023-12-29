#include<stdio.h>

int main(){
	int n;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &n);
    
    int arr[n];
    for(int i = 0; i < n; i++){
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int soam=0;
    int soammax;
    int soduong=0;
	int soduongmax;
	
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			soam++;
		}else{
			soduong++;
		}
	}   
	printf("co tat ca %d so am trong mang \n ", soam);
	printf("co tat ca %d so duong trong mang",soduong);
}
