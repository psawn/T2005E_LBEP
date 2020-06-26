#include <stdio.h>
float average(int s[], int n) {
	float S=0,KQ;
	for(int i=0;i<n;i++) {
		S=S+s[i];
	}
	KQ=S/n;
	printf("Average=%0.1f",KQ);
	return KQ;
}
int main() {
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int s[n];
	for(int i=0;i<n;i++) {
		printf("Nhap phan tu thu %d:",i);
		scanf("%d",&s[i]);
	}
	average(s,n);
}
