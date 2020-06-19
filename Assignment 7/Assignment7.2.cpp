#include <stdio.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu:");
		scanf("%d",&ary[i]);
	}
	int x;
	printf("Nhap buoc nhay x=");
	scanf("%d",&x);
	for(int i=0;i<x;i++) {
		for(int j=0;j<n-1;j++) {
			int temp = ary[j];
			ary[j] = ary[j+1];
			ary[j+1] = temp;
		}
	}
	for(int i=0;i<n;i++) {
		printf("%d ",ary[i]);
	}
}
