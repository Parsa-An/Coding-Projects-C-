#include <stdio.h>

int main(void)
{
	char Warship;
	printf("Enter a warship class (S, C, D, F, A)\n");
	scanf("%c", &Warship);
	
	
	if (Warship >= 'a' && Warship <= 'z') {
		Warship -= 32;
	}
	
	switch (Warship) {
		case 'S':
			printf("Submarine\n");
			break;
		case 'C':
			printf("Cruiser\n");
			break;
		case 'D':
			printf("Destroyer\n");
			break;
		case 'F':
			printf("Frigate\n");
			break;
		case 'A':
			printf("Aircraft Carrier\n");
			break;
		default:
			printf("Unknown ship class\n");
		}
		
	return 0;
}

