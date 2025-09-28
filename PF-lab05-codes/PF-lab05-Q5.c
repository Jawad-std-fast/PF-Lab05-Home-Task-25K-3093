#include<stdio.h>

int main(){
	int prerequisite;
	int course;
	printf("  Course Enrollment \n");
	printf("If you have completed prerequisite enter 1 :\n ");
	scanf("%d",&prerequisite);
	printf("If course is full then enter 0 :\n ");
	scanf("%d",&course);
	
	if(prerequisite==1){
		if(course==0){
			printf("Cannot enroll: course is full");
		}
		else{
			printf("Enrolled successfully");
		}
	}
	
	else if (prerequisite!=1 && course==0){
		printf("Cannot enroll: prerequisite missing and course is full");
	}
	
	else{
		printf("Cannot enroll: prerequisite missing");
	}
	return 0;
}

