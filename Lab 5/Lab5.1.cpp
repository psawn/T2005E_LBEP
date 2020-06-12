#include<stdio.h>
int main() {
	int a,b,ucln;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if(a<b) {
		for(int i=1;i<=a;i++) {
			if(a%i==0 && b%i==0) {
				ucln = i;
			}
		}
		printf("UCLN = %d",ucln);
	} else {
		for (int i=1;i<=b;i++) {
			if(a%i==0 && b%i==0) {
				ucln = i;
			}
		}
		printf("UCLN = %d",ucln);
	}
}
