#include<stdio.h>
int main()
{
	char a=' ';
	a=getchar();
	for(int i=1;i<=3;i++){
		for(int k=3-i;k>0;k--){
			putchar(' '); 
		}
		for(int j=2*i-1;j>0;j--){
			putchar(a);
		}
		printf("\n");
	}
    for(int i=2;i>=1;i--){
    	for(int k=3-i;k>0;k--){
    		putchar(' ');
		}
		for(intj=2*i-1;j>0;j--){
			putchar(a);
		}
		printf("\n");
	}
	
	return 0;
}
