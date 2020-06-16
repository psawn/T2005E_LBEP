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
	int S =0,max;
	for(int i=0;i<n;i++) {
 		if(ary[i]>0) {
 			S=S+ary[i];
			ary[i]=S; 	
		} else {
			ary[i]=0;
			S=0;
		}
 	}
 	max=ary[0];
 	for(int i=0;i<n;i++){ 		
		if(ary[i]>max) {
			max = ary[i];
		}	
	}
	printf("So luong so duong lien tiep lon nhat la %d",max);
}
