#include <stdio.h>
int main(){
	int n;
	printf("nhap n so nguyen to dau tien:");
	scanf("%d", &n);
	for(int i=1;i<=n;i++){
		if((i%i==0 && i%1==0) && (i%2!=0 && i!=2) && (i%3!=0 && i!=3) && (i%5!=0 && i!=5)) {
			printf("%d ", i);
		}	else if(i==2 || i==3 || i==5) {
				printf("%d ", i);
		}
	}
}