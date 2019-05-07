#include<stdio.h>
int main(){
	int x,y;
	double sum;
	char c;
	scanf("%d %d %c",&x,&y,&c);
    if(c=='+'){
    	printf("%d",x+y);
	}
	else if(c=='-'){
		printf("%d",x-y);
	}
	else if(c=='*'){
			printf("%d",x*y);
	}
	else if(c=='/'){
			if(y==0){
				printf("Divided by zero!");
				return 0;
			}
			printf("%d",x/y);
	}
	else{
			printf("Invalid operator!");
	}
	return 0;
}
//	switch(c){
//		case '+':
//			printf("%d",x+y);
//			break;
//		case '-':
//			printf("%d",x-y);
//			break;
//		case '*':
//			printf("%d",x*y);
//			break;
//		case '/':
//			if(y==0){
//				printf("Divided by zero!");
//			}
//			printf("%d",x/y);
//			break;
//		default:
//			printf("Invalid operator!");
//	}
