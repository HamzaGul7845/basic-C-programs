#include<stdio.h>
main ()
{
	int num, rev, n1,n2,n3,n4,n5;
	printf("enter a five digit number");
	scanf("%d", & num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	num=num/10;
	n4=num%10;
	num=num/10;
	n5=num%10;
	num=num/10;
	rev=(n1*10000)+(n2*1000)+(n3*100)+(n4*10)+(n5);
	printf("the reverse of this number is %d", rev);
}
