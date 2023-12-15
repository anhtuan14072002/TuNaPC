#include <stdio.h>
//Nh?p n sau dó tính n! ( giai th?a c?a n)
int main(){
	
	int n;
	printf("nhap vao so n:");
	scanf("%d",&n);
	
	int s=1;
	int i=1;
	while( i <= n){
		s = s*i;
		i++;
	}
	printf("!%d = %d",n,s );
}
