#include<stdio.h>

float tbcmang(int n, int arr[]){
	float s=0;
	for(int i=0;i < n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
		s += arr[i];
	}
	float tbc = s / n;
	return tbc; 
}
int main(){
	int n;
	printf("nhap vao cac phan tu trong mang:");
	scanf("%d",&n);
	int arj[n];
	float z = tbcmang(n, arj);
	printf("trung binh cong cua cac gia tri trong mang la: %f",z);
}
