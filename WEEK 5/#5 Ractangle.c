#include<stdio.h>
#include<math.h>
main()
{ float a, b;
float area;
printf(" Write adjacent sides of rectangle in cm : ");
scanf("%f%f", &a, &b);
area = a*b;
printf(" The Area of Rectangle is : %.2f cm²", area);
}
