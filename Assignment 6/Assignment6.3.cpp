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
	int count =0,max;
	for(int i=0;i<n;i++) {
 		if(ary[i]>0) {
 			count++;
			ary[i]=count; 	
		} else {
			ary[i]=0;
			count=0;
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
