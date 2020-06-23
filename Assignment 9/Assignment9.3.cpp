#include<stdio.h>
#include<string.h>

int main() {
	int i,j,n;
	printf("Nhap n=");
	scanf("%d",&n);
	char s[n][50], t[50];
	printf("Nhap %d chuoi bat ky \n",n);
	for (i = 0; i < n; i++) {
	printf("Nhap chuoi %d:",i);
    scanf("%s", s[i]);
	}
   	for (i = 1; i < n; i++) {
    	for (j = 1; j < n; j++) {
        if (strcmp(s[j - 1], s[j]) > 0) {
        	strcpy(t, s[j - 1]);
            strcpy(s[j - 1], s[j]);
            strcpy(s[j], t);
        }
    }
}

    printf("Sap xep thu tu cua cac chuoi");
    for (i = 0; i < n; i++) {
		printf("\n%s", s[i]);
	}
    return(0);
}
