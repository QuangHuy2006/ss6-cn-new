#include <stdio.h>
int main(){
	int n=5, a[100], tong;
    	printf("nhap cac phan tu co trong mang:");
    		for(int i=0;i<n;i++){
    			scanf("%d", &a[i]);
		}

		for(int i=0;i<n;i++) {
			if(a[i]%2!=0) {
				tong+=a[i];	
			}
		}
		printf("%d", tong);
}