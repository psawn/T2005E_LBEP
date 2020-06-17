#include <stdio.h>
int main() {
	int n,x;
	printf("Nhap x=");
	scanf("%d",&x);
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu: ");
		scanf("%d",&ary[i]);
	}
	int tmp,min=0;
	for(int i=0;i<n;i++) {
		if(ary[i]<x) {
			tmp = ary[i];
			if(tmp>min) {
				min = tmp;
			}
		}
	}
	printf("%d",min);
}
