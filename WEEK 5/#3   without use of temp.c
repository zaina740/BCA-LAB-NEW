//WEEK 5
#include<stdio.h>
main()
{
int a, b;
printf(" WRITE any two intg:  ");
scanf(" %d%d", &a, &b);
a = a+b; 
b = a-b;
a = a-b;
printf(" Value of first no. after swapping : %d\n", a );
printf(" Value of second no. after swappping: %d\n ", b );
}
