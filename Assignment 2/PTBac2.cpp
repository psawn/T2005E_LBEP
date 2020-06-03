#include <stdio.h>
#include <math.h> 
main(){
	float a,b,c,x1,x2,x,delta;
	printf ("Nhap a:");
	scanf("%f",&a);
	printf ("Nhap b:");
	scanf("%f",&b);
	printf ("Nhap c:");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("Phuong trinh co vo so nghiem");
			} else {
				printf("Phuong trinh vo nghiem");
			}
		} else {
			x = -c/b;
			printf("Phuong trinh co nghiem x = %f",x);
		}
	} else {
		delta=b*b-4*a*c;
		if(delta>0) {
			x1=(-b-sqrt(delta))/(2*a);
			x2=(-b+sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem x1 = %f va x2 = %f",x1,x2);
		}
		if(delta==0) {
			x=-b/(2*a);
			printf("Phuong trinh co nghiem kep x1 = x2 = %f",x);
		}
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}
	}
}
