#include<stdio.h>
int main(){
	int day,sum=0,sum1=0,sum2=0,sum3=0;
	scanf("%d",&day);
	int a[day][3];
	for(int i=0;i<day;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			sum+=a[i][j];
		}
	}
	for(int i=0;i<day;i++){
		sum1+=a[i][0];
		sum2+=a[i][1];
		sum3+=a[i][2];
	}
	printf("%d %d %d %d",sum1,sum2,sum3,sum);
	return 0;
}
