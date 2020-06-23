#include <stdio.h>
#include <string.h>
 bool timKyTuTrongChuoi (char s1[], char s2) {
	for(int i=0;i<=strlen(s1);i++) {
		if(s2==s1[i]) {
			return true;
			break; 
		}
	}
	return false;
}
int main() {
	char s1[50];
	char s2;
	printf("Nhap chuoi:");
	scanf("%s",s1);
	printf("Nhap ky tu:");
	scanf("%s",&s2);
	if(timKyTuTrongChuoi(s1,s2)) {
		printf("Ky tu co trong chuoi");
	} else {
		printf("Ky tu khong co trong chuoi");
	}
}
