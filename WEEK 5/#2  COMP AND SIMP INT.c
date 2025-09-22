#include<stdio.h>
#include<math.h>
main()
{ int pr;
float time, rt, SI, COI, Product;
printf(" Enter the principle : \n") ;
printf("Enter the time in year : \n");
printf(" Enter the rt yearly :\n");
scanf(" %d%f%f", &pr,&time, &rt );
SI = (pr*time*rt)/100;
COI= pr*(pow(1+rt/100,time)-1);
printf(" smp Interst :%.2f\n", SI);
printf(" comp intrs is : %.2f\n", COI);
}
