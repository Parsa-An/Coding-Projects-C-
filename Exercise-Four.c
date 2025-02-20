#include <stdio.h>
#include <math.h>
int 
main(void)
{
	
	double realnumber, hundreds, thousands, decimal; 
	printf ("Enter value to round\n");
	scanf( "%lf", &realnumber );
	hundreds = round ( realnumber / 100) * 100;
	printf("%f\n", ( hundreds ));
	thousands = round(realnumber / 1000) * 1000;
	printf("%f\n", ( thousands ));
	decimal = round ( realnumber * 10 ) / 10;
	printf( "%f\n", ( decimal ));
	return (0);
}

