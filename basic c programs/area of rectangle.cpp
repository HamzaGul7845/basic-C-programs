#include<stdio.h>
int main ()
{ int length, width, area, perimeter;
printf("enter the length of rectangle");
scanf("%d", & length);
printf("enter the width of rectangle");
scanf("%d",& width);
area=length*width;
printf("area of rectangle is %d \n", area);
perimeter=2*(length+width);
printf("perimeter of rectangle is %d", perimeter);
}
