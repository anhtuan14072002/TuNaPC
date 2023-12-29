#include <stdio.h>

int main() {
    int n;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int nguyento = -1;
    for(int i=0; i < n; i++){
    	for(int j=0;j<i;i++){
    		if(arr[i] % j == 0){	
			}else{
				if(arr[i]> nguyento) {
					nguyento = arr[i];
				}
			}
		}
	}
		if(nguyento == -1){
			 printf("Trong mang khong co so nguyen to.\n%d",nguyento);
		}else {
			printf("%d",nguyento);
		}
}
