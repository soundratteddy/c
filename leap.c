#include<stdio.h>
int main()
{
int in;
printf("Enter the year");
scanf("%d",&in);
if(in%4==0)
{
printf("\n The given year is a leap year");
}
else 
printf("The given year is not a leap year");
  return 0;
}
