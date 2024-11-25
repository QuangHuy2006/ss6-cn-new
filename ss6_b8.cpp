#include <stdio.h>
#include <math.h>
int main(){
	double money,rate,month,interest;
	printf("nhap so tien ban muon gui:");
	scanf("%lf", &money);
	printf("nhap lai suat(%):");
	scanf("%lf", &rate);
	printf("nhap so thang ban gui tien:");
	scanf("%lf", &month);
	interest=money*rate/100/12*month;
	printf("so tien lai sau khi gui la: %.2lf", interest);
}