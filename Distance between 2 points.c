#include<stdio.h> #include<math.h> int main()
{
float x1, y1, x2, y2, distance;
printf("Enter the values for x1, y1 \n");
scanf("%f%f", &x1, &y1);
printf("Enter the values for x2, y2 \n");
scanf("%f%f", &x2, &y2);
distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) ); printf("Distance is %0.2f\n",distance);
return 0;
}
