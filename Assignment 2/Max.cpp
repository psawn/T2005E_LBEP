#include <stdio.h>
main(){
	int a,b,c;
	printf ("Nhap a:");
	scanf("%d",&a);
	printf ("Nhap b:");
	scanf("%d",&b);
	printf ("Nhap c:");
	scanf("%d",&c);
	if(a>b) {
		if(a>c) {
			printf("a=%d la so lon nhat",a);
		} else {
			printf("c=%d la so lon nhat",c);
		}
	} 
	else {
		if(b>c){
			printf("b=%d la so lon nhat",b);
		} else {
			printf("c=%d la so lon nhat",c);
		}
	}
}
