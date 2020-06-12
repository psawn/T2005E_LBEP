#include <stdio.h> 
int main() {
	int n,f1=1,f2=1,f3;
	printf("n=");
	scanf("%d",&n);
	/*
	if(n<2) {
	printf("so fibonacci nho hon n gan nhat 1");
	}
	else {while (f1+f2<=n) {
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("so fibonacci nho hon n gan nhat %d",f3);
	}
	*/
	while (f3<=n) {
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("so fibonacci nho hon n gan nhat %d",f1);
}
