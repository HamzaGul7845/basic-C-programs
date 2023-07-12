#include<stdio.h>
main()
{
	int rupee1,rupees2,rupees5,rupees10,rupees20,rupees50;
	float totalamount;
	printf("enter the number of one rupee coin entered",rupee1);
	scanf("%d", & rupee1);
	printf("enter the number of two rupees coin entered",rupees2);
	scanf("%d",& rupees2);
	printf("enter the number of five rupees coin entered",rupees5);
	scanf("%d", & rupees5);
	printf("enter the number of ten rupees note entered",rupees10);
	scanf("%d", & rupees10);
	printf("enter the number of twenty rupees note entered",rupees20);
	scanf("%d", & rupees20);
	printf("enter the number of 50 rupees notes entered",rupees50);
	scanf("%d", & rupees50);
	totalamount=(rupee1)+(rupees2*2)+(rupees5*5)+(rupees10*10)+(rupees20*20)+(rupees50*50);
	printf("the total amount entered by user is %f", totalamount);
	
}
