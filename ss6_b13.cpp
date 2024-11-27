#include <stdio.h>
int main(){
	int ngay,thang;
	printf("nhap ngay sinh:");
	scanf("%d", &ngay);
	printf("nhap thang sinh:");
	scanf("%d", &thang);
	if(ngay<1 || ngay >31){
		printf("ngay khong hop le");
	}
	if(thang <1 || thang >12){
		printf("thang khong hop le");
	}
	if((ngay <=31) && ((ngay >=20 && thang ==1) || (ngay<=18 && thang==2))){
		printf("cung bao binh");
	}
	else if((ngay <=28) && ((ngay >=19 && thang ==2) || (ngay<=20 && thang==3))){
		printf("cung song ngu");
	}
	else if((ngay <=31) && ((ngay >=21 && thang ==3) || (ngay<=20 && thang==4))){
		printf("cung bach duong");
	}
	else if((ngay <=31) && ((ngay >=21 && thang ==4) || (ngay<=20 && thang==5))){
		printf("cung kim nguu");
	}
	else if((ngay <=31) && ((ngay >=21 && thang ==5) || (ngay<=21 && thang==6))){
		printf("cung song tu");
	}
	else if((ngay <=31) && ((ngay >=22 && thang ==6) || (ngay<=22 && thang==7))){
		printf("cung cu giai");
	}
	else if((ngay <=31) && ((ngay >=23 && thang ==7) || (ngay<=22 && thang==8))){
		printf("cung su tu");
	}
	else if((ngay <=31) && ((ngay >=23 && thang ==8) || (ngay<=22 && thang==9))){
		printf("cung xu nu");
	}
	else if((ngay <=31) && ((ngay >=23 && thang ==9) || (ngay<=23 && thang==10))){
		printf("cung thien binh");
	}
	else if((ngay <=31) && ((ngay >=24 && thang ==10) || (ngay<=22 && thang==11))){
		printf("cung bo cap");
	}
	else if((ngay <=31) && ((ngay >=23 && thang ==11) || (ngay<=21 && thang==12))){
		printf("cung nhan ma");
	}
	else if((ngay <=31) && ((ngay >=22 && thang ==12) || (ngay<=19 && thang==1))){
		printf("cung ma ket");
	}
}