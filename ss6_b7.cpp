#include <stdio.h>
int main(){
	int n;
	printf("nhap so bat ky:");
	scanf("%d", &n);
	printf("cac uoc cua %d la:", n);
	for(int i=1;i<n;i++){
		if(n%i==0){
			printf("%d ", i);
		}
	}
}