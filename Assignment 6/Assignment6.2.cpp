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
	int min=1;
	for(int i=0;i<n;i++) {
		if(ary[i]%2==0) {
			min =ary[i];
			break;
		}
	}
	if(min%2==1) {
		printf("Khong co so chan trong mang");
	} else {
		for(int i=0;i<n;i++) {
			if(ary[i]<min&&ary[i]%2==0) {
				min = ary[i];
			}
		}
		printf("MIN CHAN=%d",min);
	}
}
