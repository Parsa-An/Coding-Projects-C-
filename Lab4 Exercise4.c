#include <stdio.h>

int main(int argc, char **argv)
{
	double  n;
	printf("Please enter Richter Scale Number of earthquake with two decimal places (n)\n");
	scanf("%lf", &n);
	if (n < 5.0) 
		printf("Little or no damage\n");
	else if (n>= 5.0  && n < 5.5)
		printf("Some damage\n");
	else if (n>= 5.5 && n < 6.5)
		printf("Serious damage: Walls may crack or fall\n");
	else if ( n>= 6.5 && n < 7.5)
		printf("Disaster: Houses and buildings may collapse\n");
	else 
		printf("Catastrophe: Most buildings destroyed\n");	
		
	return 0;
	
	
	// We cannot use the switch function becuase the switch function is not used for inequalities
	// it is better used for discrete values or menus rather than ranges.
}


