#include<stdio.h>
#include<math.h>
int main()
{
float p,t;
float r,si,amount,ci;
printf("Enter principal,time and rate of interest:");
scanf("%f%f%f",&p,&t,&r);
si=p*t*r/100;
printf("\nSimple interest is %.3f",si);
ci = p*(pow(1+r/100,t)-1);
printf("\nCompound interestis %.3f",ci);
}
