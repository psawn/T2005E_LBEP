#include <stdio.h>
#include<math.h>
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu: ");
		scanf("%d",&ary[i]);
	}
	for(int i=0;i<n;i++) {
		if(ary[i]==2) {
			printf("%d ",ary[i]);
		} else if (ary[i]>2) {
			int count=0;
			for (int j=2;j<=(ary[i]/2);j++) {
				if(ary[i]%j==0) {
					count++;
					break;
				}
			}
			if(count<=0) {
				printf("%d ",ary[i]);
			}
		}
	}
}
