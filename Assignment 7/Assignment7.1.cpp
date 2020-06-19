#include <stdio.h>
int main() {
	int n;
	printf("n=");
	scanf("%d",&n);
	int ary[n];
	int i,j,k;
	for(int i=0;i<n;i++) {
		printf("\nNhap phan tu:");
		scanf("%d",&ary[i]);
		for(int j=0;j<=i;j++){
			for(int k=0;k<i;k++) {
				if(ary[k]>ary[k+1]) {
					int temp = ary[k];
					ary[k] = ary[k+1];
					ary[k+1] = temp;
				}
			}
		}
		for(int j=0;j<=i;j++) {
			printf("%d ",ary[j]);
		}
	}
}
