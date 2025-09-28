#include<stdio.h>

int main(){
	int age;
	printf("      Movie Theater     \n ");
	printf("Enter your age :\n");
	scanf("%d",&age);
	if(age<=5){
		printf("Your ticket prices is free.\n");	
		printf("Ticket Price is : FREE");	
	}
	else if(age>=65){
		printf("You have to pay discounted ticket price.\n");
		printf("Ticket Price is : DISCOUNT");
	}
	else{
		printf("You have to pay standard ticket price.\n");
		printf("Ticket Price is : STANDARD");
	}
	return 0;
}


