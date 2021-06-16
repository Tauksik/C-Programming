#include <stdio.h>
int main()
{
float r;
float pi=3.14,area,dia,cir;
printf("Enter the radius of the circle : ");
scanf("%f",&r);
if(r>3)
{
dia=2*r;
cir=2*pi*r;
area=pi*r*r;
printf("\nThe diameter of the circle is = %.2f",dia);
printf("\nThe circumference of the circle is = %.2f",cir);
printf("\nThe area of the circle is = %.2f",area);
}
else
printf("Wrong Input,Values cannot be computed");
return 0;
}
