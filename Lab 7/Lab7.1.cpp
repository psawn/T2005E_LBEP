#include <stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	n=abs(n);
	int max=0,tmp;
	while(n>0) {
		tmp = n%10;
		n=n/10;
		if(tmp>max) {
			max = tmp;
		}
	}
	printf("Chu so lon nhat cua n la %d",max);
}
