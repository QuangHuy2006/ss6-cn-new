#include <stdio.h>
#include <math.h>
int main(){
	int armstrong,tram,chuc,dvi;
	printf("nhap so armstrong:");
	scanf("%d", &armstrong);
	tram=armstrong/100;
	chuc=armstrong%100/10;
	dvi=armstrong%10;
	if((pow(tram,3)+pow(chuc,3)+pow(dvi,3))==armstrong){
		printf("%d", armstrong);
	}else{
		printf("khong la so armstrong");
	}
}