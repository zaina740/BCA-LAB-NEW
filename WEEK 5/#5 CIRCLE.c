#include<stDio.h>
#include<math.h>
main()
#define pi 3.1415
{ float R;
float Ar, Prm;
printf("Enter radius of circle : ");
scanf("%f",&R);
Ar=pi*R*R;
Prm=2*pi*R;
printf("THE AREA IS %f unit²\n",Ar);
printf(" THE PARIMETER IS %.2f unit",Prm);
}
