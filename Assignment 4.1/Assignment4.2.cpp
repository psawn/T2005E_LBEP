#include <stdio.h>
int main() {
	char c;
	do {
	printf("c=");
	scanf("%s",&c);
	} while (!(c=='y' || c=='Y' || c=='n' || c=='N'));
}
