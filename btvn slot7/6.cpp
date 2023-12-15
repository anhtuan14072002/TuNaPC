#include <stdio.h>
#include <math.h>
//Nh?p n sau dó tính S = 1 + 1/2 + 1/3 + … + 1/n
int main(){
	
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	float s = 0;
	int i=1;
	while(i <= n){
		s = s + 1.0 /i;
		i++;
	}	
	printf(" tong s= %f ",s);
}
