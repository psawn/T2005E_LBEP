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
	if(n<3) {
		printf("Khong co so o vi tri chan");
	} else {
		for(int i=2;i<n;i=i+2) {
			if(ary[i]%2==1) {
				count++;
				S=S+ary[i];
			}
		}
		printf("TB cong cac so le o vi tri chan trong mang=%f",(float)S/count);
	}
}
