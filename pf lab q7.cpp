#include<stdio.h>

int main(){
	
	int rate;
	
	printf("enter movie rating (1 to 5)");
	scanf("%d",&rate);
	
	switch(rate){
		
		case 5:
			printf("5: Excellent");
			break;
			
		case 4:
			printf("4: Good");
			break;
			
		case 3:
			printf("3: Average");
			break;
		case 2:
			printf("2: poor");
			break;
		case 1:
			printf("1: Terrible");
			break;
	}
}
