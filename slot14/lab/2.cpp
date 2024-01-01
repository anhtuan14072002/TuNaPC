#include<stdio.h>
#include<math.h>

int dientich(int a, int b, int c){
	int p = (a + b + c)/2;
	int s= sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

int mai(){
	
}
