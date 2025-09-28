#include<stdio.h>

int main(){
    int username;
	int password,pass=1234;
	printf("Enter the username :\n");
	scanf("%d",&username);
	printf("Enter your password :\n");
	scanf("%d",&password);
	if(username==9200){
		if(password==pass){
			printf("Successfully login");
		}
		else{
			printf("Incorrect password, TRY AGAIN!");
		}
	}
	else{
		printf("Username not found");
	}
	return 0;
}

