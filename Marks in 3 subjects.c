#include <stdio.h>
int main()
{
int m,p,c,t,mp;
printf("Enter Physics Marks");
scanf("%d",&p);
printf("Enter Math Marks");
scanf("%d",&m);
printf("Enter Chemistry Marks");
scanf("%d",&c);
t=p+m+c;
printf("Total=%d \n",t);
mp=p+m;
printf("\nMarks in Math and Physics=%d \n",mp);
if(m>=65)
if(p>=55)
if(c>=50)
if((t>=190 ||mp>=140))
printf("Eligible");
else
printf("Not Eligible");
else
printf("Not Eligible");
else
printf("Not Eligible");
else
printf("Not Eligible");
return 0;
}
