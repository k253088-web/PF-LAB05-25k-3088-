#include<stdio.h>

int main(){
	
	char color;
	printf("enter color (red (r) , yellow (y) , green (g) ");
	scanf("%c",&color);
	
	if(color=='r'){
		printf("Red: Stop");
	}
	else if( color=='y'){
		printf("Yellow: Caution");
	}
	else{
		printf("Green: Go");
	}
	return 0;
}
