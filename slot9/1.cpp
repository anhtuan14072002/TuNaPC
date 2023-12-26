#include<stdio.h>
#include<math.h>

int main(){
	
	int n;
	int a[n];
	printf("nhap vao so n:");
	scanf("%d",&n);
	printf("cac phan tu trong mang ");
	for(int i=0;i<n;i++){
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}
	int s=0;
	float tbc=0;
	float sole;
	for(int i=0;i<n;i++){
		if(a[i] % 2 !=0){
			s += a[i];
			sole++;
			tbc=s / sole;
		}
	}
	printf("tong so le la: %d",s);
	printf("trung binh cong %f",tbc);
}
