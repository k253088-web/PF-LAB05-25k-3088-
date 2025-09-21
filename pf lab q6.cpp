#include<stdio.h>

int main(){
	
	int a=0;
	int b=0;
	int max;
	
	printf("enter 1st number");
	scanf("%d",&a);
	
	printf("enter 2nd number");
	scanf("%d",&b);
	
	max= (a>b)? a: b;
	printf("The maximum number is: %d\n",max);
	
	return 0;
}
