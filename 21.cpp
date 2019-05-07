#include<stdio.h>
int main(){
	int n;
	double x1,y1;
	scanf("%d",&n);
	int a[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	x1=double(a[0][1])/a[0][0];
	for(int i=1;i<n;i++){
		y1=double(a[i][1])/a[i][0];
		if(y1-x1>0.05){
			printf("better\n");
		}
		else if(x1-y1>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	
	} 
		return 0;
}
