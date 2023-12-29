#include<stdio.h>
#include<math.h>

int chuvi(int a, int b ,int c){
		int P = a + b + c;
		return P;
}

int main(){
	int x = 3, y = 4, z = 5;
	int t = chuvi(x,y,z);
	printf("chu vi tam giac :%d",t);
}
