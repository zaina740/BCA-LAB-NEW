#include<stdio.h>
#include<math.h>
main()
{ float a,b,c,s;
float AREA, PARAM;
printf("Enter the sides of triangle: ");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
PARAM=2*s;
AREA=sqrt(s*(s-a)*(s-b)*(s-c));
printf(" THE AREA IS : %0.3f", AREA);
printf(" THE PARAMETER IS :%0.2f",PARAM);
}
