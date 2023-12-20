#include<stdio.h>
#include<math.h>

int main(){
	
	int a;
	int b;
	int c;
	float p;
	float s;
	float p2;
	
	for(;;){
			printf("nhap vao canh a:");
			scanf("%d",&a);
			printf("nhap vao canh b:");
			scanf("%d",&b);
			printf("nhap vao canh c:");
			scanf("%d",&c);
			if(a + b > c && a + c > a && b + c > a){
				p = a + b + c;
				p2 = p / 2;
				s = sqrt(p2*(p2-a) * (p2-b) * (p2-c));
				printf("chu vi tam giac la: %f",p);
				printf("\ndien tich tam giac la: %f",s);
				break;
		}else{
			printf("3 so khong phai do dai cua tam giac \nVui long nhap lai\n");
		}
	}
}
