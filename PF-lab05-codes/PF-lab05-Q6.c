#include<stdio.h>

int main(){
    char room;
	char action;
	printf("Smart Home System\n");
	printf("'L' for Living Room\n'K' for Kitchen\n");
	printf("Enter the room :\n");
	scanf(" %c",&room);
	printf("What action do you want?\n");
	printf("'L' for Lights\n'T' for Thermostat\n");
	printf("Enter for the action :\n");
	scanf(" %c",&action);
	switch(room){
		case 'L':
			switch(action){
				case 'L':
					printf("  Living Room Lights:Adjusting ambient lighting.");
					break;
				case 'T':
					printf(" Living Room Thermostat:Setting living room temperature.");
					break;
				default:
					printf("Inavlid Action : Try Again");
					break;
			}
			
			break;
		case 'K':
			switch(action){
				case 'L':
					printf(" Kitchen Lights:Turning on bright task lighting.");
					break;
				case 'T':
					printf("Kitchen Thermostat:Setting kitchen temperature.");
					break;
				default:
						printf("Inavlid Action : Try Again");
					break;
			}
			break;
		default:
			printf("Invalid Room : Try Again");
		    break;	
	}
	 
	return 0;
}



