#include <stdio.h>
int main()
{
float height,base,area;
printf("Enter the height of the triangle : ");
scanf("%f",&height);
printf("Enter the base of the triangle : ");
scanf("%f",&base);
area=(base*height)/2;
printf("The area of the triangle is = %.2f",area);
return 0;
}
