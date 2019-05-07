#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,SQRTX1,SQRTX2;
	scanf("%lf %lf %lf",&a,&b,&c);
	SQRTX1=(-b+sqrt(b*b-4*a*c))/(2*a);
	SQRTX2=(-b-sqrt(b*b-4*a*c))/(2*a);
    
	
	if(b*b==4*a*c){
		printf("x1=x2=%.5f",-b/(2*a));
	}
	else if(b*b>4*a*c){
		if(SQRTX1>SQRTX2){
			printf("x1=%.5f;x2=%.5f",SQRTX1,SQRTX2);
		}
		else{
			printf("x1=%.5f;x2=%.5f",SQRTX2,SQRTX1);
		}
	}
	else{
		if(-b/(2*a)==0){
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",fabs(-b/(2*a)),sqrt(4*a*c-b*b) / (2*a),fabs(-b/(2*a)),sqrt(4*a*c-b*b) / (2*a));
		}
		else{
				printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi",-b/(2*a),sqrt(4*a*c-b*b) / (2*a),-b/(2*a),sqrt(4*a*c-b*b) / (2*a));
		}
	}
	return 0;
} 
