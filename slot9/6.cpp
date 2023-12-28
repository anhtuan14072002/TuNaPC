#include<stdio.h>

int main(){
	int n;
	printf("nhap vao so luong phan tu trong mang :");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0; i<n; i++){
		printf("arr[%d] :",i);
		scanf("%d",&arr[i]);
	}
	
	int sochan=0;
	int lientiep=0;
	for(int i=0; i<n; i++){
		if(arr[i] % 2 == 0){
			sochan ++;
			if(sochan > lientiep){
				lientiep = sochan;
			}
			}else{
				sochan=0;
			}
	}
		printf("so luong cac so duong lien tiep nhieu nhat la: %d",lientiep);
}
