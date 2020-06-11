#include <stdio.h>
int main() {
	int n;
	do {
	printf("n=");
	scanf("%d",&n);
	if (1<n&&n<8) {
	printf("Thu %d",n);
	} else if (n==8) {
	printf("Chu Nhat");
	}
	} while (!(1<n&&n<9 ));
	
}
