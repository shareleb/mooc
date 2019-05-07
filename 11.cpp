#include<iostream>
#define V 20000
#define PI 3.1415926
using namespace std;
int main(){
	int r,h,num=1;
	double v,sum;
	cin>>h>>r;
    v=PI*r*r*h;
    sum=v;
	while(1){
		if(sum>=V){
			break;
		}
		else{
			num++;
			sum=v*num;
		}
	}
	cout<<num;
	return 0;
}
