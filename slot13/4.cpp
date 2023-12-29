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
    
    int trung;
  
    for(int i=0;i<n;i++){
    	for(int j = i + 1; j < n; j++){
    		if(arr[j]==arr[i]){
    			trung= arr[i];
    			printf("%d \t",trung);
			}
		}
	}
}


