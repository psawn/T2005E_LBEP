#include <stdio.h>
int main() {
	int n,i=2;
	printf("n=");
	scanf("%d",&n);
	while (i<n) {
		if(i%2==0){
			printf("%d \n",i);
		}
		i++;
	}
}
