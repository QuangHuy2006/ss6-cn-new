#include <stdio.h>
int main(){
	int n=5;
	int ps;
	printf("vui long nhap mat khau(1 so):");
	scanf("%d", &ps);
	if(ps==n){
		printf("mat khau dung");
	}else{
		printf("mat khau sai");
	}
}