#include<stdio.h>
int zhengchu(int x,int y){
	double d=y+0.0;
	d=d/x;
	if(d>y/x){
		return 1;
	}
	return 0;
	
}
int main(){
	int n,x,y;
	double d;
	scanf("%d %d %d",&n,&x,&y);
	if(y/x>=n){
		printf("0");
	}
	else{
		if(zhengchu(x,y)){
			printf("%d",n-1-(y/x));
		}else{
			printf("%d",n-(y/x));
		}
	} 
	return 0;
}
