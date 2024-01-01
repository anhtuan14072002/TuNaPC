#include<stdio.h>
#include<math.h>

int ucln(int a, int b){
	int ucln=1;
	for(int i=a; i>0 ;i--){
		if(a % i==0 && b % i==0){
			return i;
		}
	}
}

int main(){
	int x= 12, y= 8;
	int z= ucln(x,y);
	printf("uoc chung lon nhat la:%d",z);
}
