
#include<stdio.h>

int main(){
	
	int max_withdrawal_limit=7000;
	int amount=0;
	
	printf("enter amount");
	scanf("%d",&amount);
	
	if(amount<=max_withdrawal_limit && amount%20==0){
		printf("Withdrawal approved.");
	}
	else{
		printf("Withdrawal denied.");
	}
	return 0;
	
}


