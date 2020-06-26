#include <stdio.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	int count=0,result;
	for(int i=n-1;i>0;i--) {
		if(ary[i]%2==0) {
			result = ary[i];
			count++;
			break;
		}
	}
	if(count==0) {
		printf("Khong co so chan");
	} else {
		printf("So chan cuoi cung:%d",result);
	}
}

