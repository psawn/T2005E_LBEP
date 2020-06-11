#include <stdio.h>
int main() {
	float tiengui,tiennhan;
	int nam=0;
	printf("tiengui=");
	scanf("%f",&tiengui);
	printf("tienthu=");
	scanf("%f",&tiennhan);
	while (tiengui<tiennhan){
		tiengui=tiengui+tiengui*0.08;
		nam++;
	}
	printf("tong nam=%d \n",nam);
}
