#include<stdio.h>
#include<math.h>

int tong(int n){
	int s;
	for(int i; n>0;){
		i= n % 10;
		n= n / 10;
		s += i ;
	}
	return s;
}

int main(){
	int x=123;
	int y = tong(x);
	printf("tong cua cac chu so trong n la: %d",y);
}
