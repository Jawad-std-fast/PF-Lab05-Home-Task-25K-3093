#include<stdio.h>

int main(){
    int power;
    char color;
    printf("If power is On enter 1 :\n");
    scanf("%d",&power);
    if(power==1){
    	printf("Enter the color of signal.\n");
    	printf(" for Red enter 'R'\n For Yellow enter 'Y'\n For Green enter 'G'\n");
    	scanf(" %c",&color);
    		switch(color){
    		case 'R': 
			case 'r':
    			printf("Stop!");
    			break;
    		case 'Y':
			case 'y':
			    printf("Caution");
				break;
			case 'G': 
			case 'g':
			    printf("Go!");
				break;
			default:
			printf("Invalid Color");
			break;			
		}
    	
	}
	else{
		printf("Signal Off");
	}
	return 0;
}


