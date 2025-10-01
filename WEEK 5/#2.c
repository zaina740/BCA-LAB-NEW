#include<stdio.h>
#include<math.h>
int main()
{
float rate, time, ci, si;
int prin;
printf(" write princpl value in intgr : \n");
scanf("%d", &prin);
printf(" write time : \n");
scanf("%f", &time);
printf(" write rate : \n");
scanf("%f", &rate);
si = (prin*time*rate)/100;
ci = prin*(pow(1+rate/100, time)-1);
printf("Simple Int is :%.2f \n",si);
printf("Comp Int is : %.2f\n" ,ci);
}
