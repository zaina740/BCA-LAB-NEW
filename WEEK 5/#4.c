#include<stdio.h>
#include<math.h>
main()
{  int a, b, c;
printf(" write largest side of a triangle :");
scanf("%d", &a);
printf(" write other sides of tringl:");
scanf(" %d%d",&b, &c);
if (a>=b+c)
 {
   printf(" NO triangle formed \n");
 } 
  else 
  {  if ( a*a == b*b + c*c)
{
	printf(" tringle is right angled");
	}else if (a*a>=b*b + c*c ){
		printf(" a obtuse trng formed");
		}else if ( a*a <=  b*b + c*c){
			printf(" acute tring formed");
          }
          return 0;
}
}
