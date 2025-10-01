#include<stdio.h>
main()
{ char a; 
printf("Enter a alphabatic character : ");
scanf("%c",&a);
if (( a >= 65 && a<= 90)|| ( a >= 97 && a<= 122))
{
	if ( a=='a' || a=='e'|| a=='i' || a=='o' || a=='u'|| a=='A' || a=='E'|| a=='I' || a=='O' || a=='U' )
		printf("The alphabatic character is Vowel");
 
	else if ( a!='a' || a!='e' || a!='i'|| a!='o' ||a!='u'|| a!='A' || a!='E' || a!='I'|| a!='O' ||a!='U')
	{ 
	printf(" The character is consonent\n");
    }
}
	else
		printf("THIS IS NOT ALPHABETIC LETTER");


}

