#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("nhap so a:");
	scanf("%d", &a);
	printf("nhap so b:");
	scanf("%d", &b);
	printf("nhap so c:");
	scanf("%d", &c);
	printf("phuong trinh co dang: %dx^2 + %dx + %d = 0",a,b,c);
	if(a!=0){
		int delta=b*b-4*a*c;
		if(delta>0){
			float x1=(-b+sqrt(delta))/2*a;
			float x2=(-b-sqrt(delta))/2*a;
			printf("\nphuong trinh co hai nghiem phan biet");
			printf("\nx1 = %f", x1);
			printf("\nx2 = %f", x2);
		}
		else if(delta<0){
			printf("\nphuong trinh vo nghiem");
		}
		else if(delta=0){
			printf("\nphuong trinh co mot nghiem kep");
	}else{
		printf("\nphuong trinh co dang: %dx + %d = 0", b, c);
		if(b!=0){
			printf("\nphuong trinh co nghiem voi x= -%d / %d",c, b);
		}else {
			printf("\nphuong trinh vo nghiem");
			}
		}
		return 0;
	}
}