#include<stdio.h>
#define T 3.14
int main(){
	double r,v;
	scanf("%lf",&r);
	v=4.0/3*T*r*r*r;
	printf("%.2f",v);
	return 0; 
}
