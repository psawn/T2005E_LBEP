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
	int count =0,max;
	for(int i=0;i<n;i++) {
		if(*(p+i)>0) {
			count++;
			if(count>max) {
				max=count;
			}
		} else {
			count=0;
		}
	}
	printf("So luong so duong lien tiep lon nhat la %d",max);
}
