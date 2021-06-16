#include<stdio.h>
int main()
{
float u,c,u1;
printf("Enter the weight of the parcel: ");
scanf("%f",&u);
if(u>=0&&u<=20)
{
    c=25;
    printf("Charges for the parcel:%.2f",c);
}
else if(u>20)
{
    u1=(u-20)/10;
    c=25+u1*5;
    printf("Charges for the parcel:%.2f",c);
}
else
printf("Wrong Input");
return 0;
}
