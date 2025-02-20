#include <stdio.h>

int
main(void)
{
 double r1 , r2 , pi = 3.14, circumference;
 
 printf("Type two radii to calculate elipse circumference\n");
 scanf("%lf %lf", &r1, &r2);
 circumference = pi * (r1 + r2);
 printf("The circumference is %lf\n" , circumference);
	
	return 0;
}

