#include<stdio.h>
#include<math.h>

float dientich(int a,int b,int c){
		float P = (a + b + c)/2;
		float S = sqrt(P*(P-a)*(P-b)*(P-c));
		return S;
}

int main(){
	int x = 8, y = 7, z = 9;
	float t = dientich(x,y,z);
	printf("dien tich tam giac la: %f",t);
}
