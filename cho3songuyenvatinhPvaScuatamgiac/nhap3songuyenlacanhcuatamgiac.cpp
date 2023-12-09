#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("nhap vao so thu nhat:");
	scanf("%d",&a);
	
	int b;
	printf("nhap vao so thu hai:");
	scanf("%d",&b);
	
	int c;
	printf("nhap vao so thu ba:");
	scanf("%d",&c);
	
	int P = a + b + c;
	
	float S = sqrt(P * (P - a) * (P - b) * (P - c));
	
	if(a + b >c ){
		if(a + c > b){
		}else{
		}
		if(b + c > a){
		printf("chu vi tam giac la: %d \n",P);
		printf("dien tich tam giac la: %f",S);
		}
		}else{
		printf("3 so khong du dieu kien la canh cua tam giac \n");
		}
}



