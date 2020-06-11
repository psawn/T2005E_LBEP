#include <stdio.h> 
int main() {
	int f1=1,f2=1,f3,n;
	printf("n=");
	scanf("%d",&n);
	if(n<=2) {
		printf("So thu %d trong day Fibonacci la 1",n);
	} else {
		for(int i=2;i<n;i++) {
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		printf("So thu %d trong day Fibonacci la %d \n",n,f3);
	}
}
