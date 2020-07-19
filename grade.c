//CHALLENGE = CONDITIONAL STATEMENTS 1
//grading marks of a student


#include<stdio.h>
main()
{
	int mrk=0;
	printf("Enter the marks of the student: \n");
	//1. Marks are entered from the user
	scanf("%d",&mrk);
	//2. Grade calculation and printing
	if(mrk>=85 && mrk<=100)
	   printf("Grade A");
	else if(mrk>=70 && mrk<=84)
	   printf("Grade B");
	else if(mrk>=55 && mrk<=69)
	   printf("Grade C");
	else if(mrk>=40 && mrk<=54)
	   printf("Grade D");
	else
	   printf("Grade F");
	return 0;
}
