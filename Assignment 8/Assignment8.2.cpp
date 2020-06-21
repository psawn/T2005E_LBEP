#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*p;
	printf("Nhap n=");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu %d:",i);
		scanf("%d",p+i);
	}
	int S=0,max;
	for(int i=0;i<n;i++) {
		if(*(p+i)>0) {
			S=S+*(p+i);
			if(S>max) {
				max=S;
			}
		} else {
			S=0;
		}
	}
	printf("So luong so duong lien tiep lon nhat la %d",max);
}
