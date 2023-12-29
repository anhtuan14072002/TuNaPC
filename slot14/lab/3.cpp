#include<stdio.h>
#include<math.h>

int tongcacsonguyen(int n){
	int s=0;
	for(int i;n>0;i++){
		i= n % 10;
		n= n / 10;
		s += i;
	}
	return s;
}

int main(){
	int x= 1234;
	int z = tongcacsonguyen(x);
	printf("tong cac chu so cua so nguyen :%d",z);
}
