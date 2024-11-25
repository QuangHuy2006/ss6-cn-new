#include <stdio.h>
int main(){
	int n=5, a[100], sole=0, sochan=0;
    	printf("nhap cac phan tu co trong mang:");
    		for(int i=0;i<n;i++){
    			scanf("%d", &a[i]);
		}

		for(int i=0;i<n;i++) {
			if(a[i]%3!=0) {
				sochan++;	
			}
			else sole++;
		}
		
		printf("so luong so le la %d", sole);
		printf("\nso luong so chan la %d", sochan);
}