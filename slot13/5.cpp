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
    
    int nguyento = 0;
    int nguyentomax=0;
    for(int i=0; i < n; i++){
    	if(arr[i]>=2){
    		nguyento = 0;
		}
    	for(int j = 2; j<i; j++){
    		if(arr[i] % j == 0){
				nguyento = 1;
			}else{
				if(arr[i]> nguyentomax) {
					nguyentomax = arr[i];
				}
			}
		}
	}
		if(nguyentomax == 0){
			printf("Trong mang khong co so nguyen to.\n");
		}else{
			printf("%d",nguyentomax);
		}
		
		
}
