#include <stdio.h>
#include <math.h> 
main(){
	float a,b,c,d,P,S;
	printf ("Nhap a:");
	scanf("%f",&a);
	printf ("Nhap b:");
	scanf("%f",&b);
	printf ("Nhap c:");
	scanf("%f",&c);
	d= fabs(b-c);
	if(d<a) {
		if(a<(b+c)) {
			printf("Day la tam giac \n");
			P=a+b+c;
			printf("Chu vi = %f cm \n",P);
			S=sqrt((P/2)*(P/2-a)*(P/2-b)*(P/2-c));
			printf("Dien tich =%f cm2",S);
		} else {
			printf("Day khong la tam giac");
		}
	} else {
		printf("Day khong la tam giac");
	}
}
