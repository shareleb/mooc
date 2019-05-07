#include<stdio.h>
int main(){
	int max,min,n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(int i=0;i<n-1;i++){
		if(a[i+1]>max){
			max=a[i+1];
		}
		if(a[i+1]<min){
			min=a[i+1];
		}
	}
	printf("%d",max-min);
	return 0;
}
