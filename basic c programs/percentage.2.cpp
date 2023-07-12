//ask user to enter total and obtained marks and find percentage
#include<stdio.h>
main()
{
	float totalnumber,obtained,percentage;
	printf("enter total number");
	scanf("%f",&totalnumber);
    printf("enter obtained marks");
	scanf("%f",&obtained);
	percentage=(obtained*100)/totalnumber;
	printf("percentage is %f",percentage);	
}
