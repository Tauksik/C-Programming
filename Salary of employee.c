#include<stdio.h>
int main()
{
float basic,gross,hra,da;
printf("Enter the basic salary of the employee: ");
scanf("%f",&basic);
if(basic<=10000)
{
da=basic*0.8;
hra=basic*0.2;
}
else if(basic>=10001&&basic<20000)
{
da=basic*0.9;
hra=basic*0.25;2
}
else
{
da=basic*0.95;
hra=basic*0.3;
}
gross=basic+hra+da;
printf("GROSS SALARY OF EMPLOYEE = %.2f",gross);
return 0;
}
