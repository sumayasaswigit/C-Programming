//write a c-program sum of two numbers difference of two numbers product of two number quotient of two numbers
#include<stdio.h>
int main()
{
float n1,n2;
char operator;
printf("input the value of n1:\n");
printf("input the value of n2:");
scanf("%f",&n1);
scanf("%f",&n2);
printf("Enter an operator:");
scanf("\n%c",&operator);
if(operator=='+')
{
printf("sum is %f",n1+n2);
}
else if(operator=='-')
{
printf("difference is %f",n1-n2);
}
else if(operator=='*')
{
printf("product is %f",n1*n2);
}
else
{
printf("quotient is %f",n1/n2);
}
return 0;
}

