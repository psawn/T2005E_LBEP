#include <stdio.h>
int main() {
	int n,count=0,S=0;
	do {
	printf("n=");
	scanf("%d",&n);
	S=S+n;
	count++;
	} while (n<1000);
	if(n>=1000) {
		printf("S=%d \n",S);
		printf("count=%d \n",count);
		float TB;
		TB = (float)S/count;
		printf("TB=%f",TB);
	}
}
