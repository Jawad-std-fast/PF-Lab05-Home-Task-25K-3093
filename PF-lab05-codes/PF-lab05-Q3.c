#include<stdio.h>

int main(){
    int a,b,c,discriminant;
    
    printf("Enter the value of a :\n");
    scanf("%d",&a);
    printf("Enter the value of b :\n");
    scanf("%d",&b);
    printf("Enter the value of c :\n");
    scanf("%d",&c);
    
    discriminant=((b*b)-(4*a*c));
    if(discriminant==0){
    	printf("one real root");
	}
	else if(discriminant>0){
		printf("two real roots");
	}
    else if(discriminant<0){
    	printf("imaginary roots");
	}
	else{
		printf("Invalid Number");
	}
	return 0;
}


