#include <stdio.h> 
int main() {
	int nam;
	float tien;
	printf("tien=");
	scanf("%f",&tien);
	printf("nam=");
	scanf("%d",&nam);
	for(int i=1;i<=nam;i++){
		tien = tien+tien*0.08;
	}
	printf("tong %f",tien);
}
