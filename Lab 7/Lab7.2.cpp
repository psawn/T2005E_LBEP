#include <stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	n=abs(n);
	int min=0,tmp;
	while(n>0) {
		tmp = n%10;
		n=n/10;
		if(tmp<min) {
			min = tmp;
		}
	}
	printf("Chu so nho nhat cua n la %d",min);
}
