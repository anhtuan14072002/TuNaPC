#include<stdio.h>
#include<math.h>

int bcnn(int a, int b){
	int i;
	if(a > 0 && b>0){
		i = a * b;
	}
	return i;
}

int main(){
	int x=2, y=3;
	int z=bcnn(x,y);
	printf("boi chung nho nhat la:%d",z);
}
