#include<stdio.h>
main()
{ int temp, a,b;
printf(" enter two int : ");
scanf(" %d%d", &a, &b);
temp = a;
a=b;
b=temp;
printf(" values of first no. after swap : %d \n", a );
printf(" value of second after swap : %d \n", b);
}
