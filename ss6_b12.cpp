#include <stdio.h>
int main(){
	int j,n,fibonacci, so1,so2;
	printf("nhap n so fibo dau tien:");
	scanf("%d", &n);
		for(j=0;j<=n;j++){
			if(j==0){
				so1=0;
				printf("%d ", so1);
			}
			else if(j==1){
				so2=1;
				printf("%d ", so2);
			}else{
				fibonacci=so1+so2;
				printf("%d ", fibonacci);
				so1=so2;
				so2=fibonacci;
		}
	}	
}
//0 1 1 2 3 5 8 131