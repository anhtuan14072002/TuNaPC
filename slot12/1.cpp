#include<stdio.h>

int main(){
	int n;
	printf("nhap vao phan tu cua mang:");
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
	for(int i=0; i < n -1 ;i++){
		for(int j=0; j< n-i-1; j++){
			 if (a[j] > a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]= temp;
			 }
		}
	}
	
	int max ;
    for (int i = 0; i < n; i++) {
        if (a[i] > x) {
             max = a[i];
        }
    }
    printf("gia tri trong mang xa gia tri %d nhat la: %d\n", x, max);	
}

