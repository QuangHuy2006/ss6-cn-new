#include <stdio.h>
int main(){
	int n;
	printf("nhap so bat ky:");
	scanf("%d", &n);
	if((n%n==0 && n%1==0) && ((n%2!=0 && n!=2) && (n%3!=0 && n!=3))){
		printf("%d la so nguyen to", n);
	}
	else if(n==2 || n==3){
		printf("%d la so nguyen to", n);
	}
	else{
		printf("%d khong la so nguyen to", n);
	}
}