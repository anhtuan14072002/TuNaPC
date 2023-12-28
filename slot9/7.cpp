#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so luong phan tu trong mang:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i < n; i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	int sum=0;
	int maxsum=0;
	for(int i = 0; i < n; i++){
        if(arr[i] > 0){  
            sum += arr[i];
        } else {
            if(sum > maxsum){
                maxsum = sum;
            }
            sum = 0;  
        }
    }
    printf("Tong lon nhat cua chuoi so duong la: %d", maxsum);
}
