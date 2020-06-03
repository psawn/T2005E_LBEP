#include <stdio.h>
#include <math.h> 
main(){
	int a,b,chia,nhan;
	printf ("Nhap a:");
	scanf("%d",&a);
	printf ("Nhap b:");
	scanf("%d",&b);
	if(a>=b){
		if(b==0){
			printf("Phep chia loi vi b =0");
		} else {
			chia=a/b;
			printf("Ket qua a/b = %d",chia);
		}
	} else {
		nhan = a*b;
		printf("Ket qua a*b = %d",nhan);
	}
}
