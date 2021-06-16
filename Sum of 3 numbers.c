#include <stdio.h>
float sum(int,int,int);
int main()
{
int a,b,c;
int s;
printf("Enter 3 numbers:\n");
scanf("%d%d%d",&a,&b,&c);
s=sum(a,b,c);
printf("Sum is %d",s);
if(s%2==0)
printf("\nEven");
else
printf("\nOdd");
return 0;
}
float sum(int a,int b,int c)
{
float s;
s=(a+b+c);
return s;
}
