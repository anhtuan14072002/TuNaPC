#include<stdio.h>
#include<math.h>

//int ucln(int a, int b){
//
//	for(int i =a;; i++){
//		if(a % i==0 && b %i ==0){
//			return i;
//		}
//	}
//	return a*b
//}
// tim so lon nhat trong mang n so nguyen
int max(int ar[],int n){ // tham so dang tham chieu
	int h=arr[0];
	for(int i=1;i<n;i++){
		if(h<arr[i]){
			h=arr[i];
		}
	}
	return h;
}
int main(){
	int ary[5]= {5,4,1,3,8};
	int m=max(ary,5);
	printf("max:%d",m);
}
