#include<stdio.h>
int main()
{
char op;
float a,b;
printf("Enter the expression(eg:5+3):");
scanf("%f %c %f",&a,&op,&b);
switch(op)
{
case '+':printf("Result=%2f\n",a+b); break;
case '-':printf("Result=%2f\n",a-b); break;
case '*':printf("Result=%2f\n",a*b); break;
case '/':
if(b!=0)
printf("Result=%2f\n",a/b);
else
printf("Cannot be divided by zero");
break;
default:printf("Invalid Direction");
}
return 0;
}