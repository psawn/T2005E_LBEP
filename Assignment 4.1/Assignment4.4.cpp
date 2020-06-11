#include <stdio.h>
int main() {
	int n,S=0;
	printf("n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0) {
			printf("Uoc cua n %d \n",i);
			S=S+i;
		}
	}
	printf("Tong uoc =%d",S);

}
