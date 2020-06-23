#include <stdio.h>
#include <string.h>
void dem(char s[]) {
	int count=0;
	for(int i=0;i<=strlen(s);i++) {
		switch(s[i]) {
			case 'a': count++;break;
			case 'e': count++;break;
			case 'i': count++;break;
			case 'o': count++;break;
			case 'u': count++;break;
		}
	}
	int KyTuKhac = strlen(s)-count;
	printf("So luong nguyen am:%d\n",count);
	printf("So luong ky tu khac:%d",KyTuKhac);
}
int main() {
	char s[50];
	printf("Nhap chuoi:");
	scanf("%s",s);
	dem(s);
}
