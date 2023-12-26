#include<stdio.h>

int main(){
	
	int n;
	int a[n];
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap phan tu %d:",i+1);
		scanf("%d",&a[i]);
	}
	int x;
	
	printf("nhap vao so x:");
	scanf("%d",&x);
	
	int b = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            b = 1; 
            break; 
        }
    }
    if (b==1) {
        printf("Tim thay %d trong mang.\n", x);
    } else {
        printf("Khong tim thay %d trong mang.\n", x);
    }

}
