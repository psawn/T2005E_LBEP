#include <stdio.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu: ");
		scanf("%d",&ary[i]);
	}
	int count=0,S=0;
	for(int i=0;i<n;i++) {
		if(ary[i]%2==1) {
			count++;
			S=S+ary[i];
		}
	}
	printf("TB cong cac so le trong mang=%f",(float)S/count);
}
