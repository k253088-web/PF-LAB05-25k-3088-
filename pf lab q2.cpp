#include<stdio.h>

int main(){
	
	int age;
	printf("enter age");
	scanf("%d",&age);
	
	if( age >=0 && age <=12){
		printf("you are child");
	}
	else if( age>=13 && age<=19){
		printf("you are teenager");
	}
	else if( age>=20 && age<=59){
		printf("you are  adult");
	}
	else {
		printf("you are senior");
	}
	return 0;
}
