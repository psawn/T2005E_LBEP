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
	int min=0;
	for(int i=n-1;i>=0;i--) {
		if(ary[i]%2==1) {
			min = ary[i];
			break;
		}
	}
	if(min%2==0) {
		printf("Mang nay k co so le");
	} else {
		for(int i=n-1;i>=0;i--){
			if(ary[i]<min&&ary[i]%2==1) {
				min = ary[i];
			}
		}
		printf("MIN LE CUOI CUNG =%d",min);
	}

}
