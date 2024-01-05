#include<stdio.h>

	float average(int s[],int n){
		float tong = 0;
		for(int i=0; i < n; i++){
			printf("s[%d]: ",i);
			scanf("%d",&s[i]);
			tong+= s[i];
		}
		float tbc = tong / n;
		return tbc;
	}

int main(){
	int n;
	printf("nhap vao so luong phan tu co trong mang: ");
	scanf("%d",&n);
	
	int arr[n];
	float z = average(arr, n);
	printf("trung binh cong cua mang la: %f",z);
}
