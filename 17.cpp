#include<stdio.h>
int main(){
	int n,sum=0;
	double avg;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	avg=(double)sum/n;
	printf("%d %.5f",sum,avg);
	return 0;
}
