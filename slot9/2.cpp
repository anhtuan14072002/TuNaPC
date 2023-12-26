#include<stdio.h>
#include<math.h>

int main(){
	
	int n;
	int a[n];
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	for(int i=0 ; i < n; i++){
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}
	int s=0;
	float tbc=0;
	float sole=0;
	for(int i=1; i<n; i+=2){
		if(a[i] %2 !=0){
			s +=a[i];
			sole ++;
			tbc= s / sole;
		}
	}
	printf("s: %d",s);
	printf(" Trung binh cong cac so le tai vi tri chan: %f",tbc);
}
