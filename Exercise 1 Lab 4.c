#include <stdio.h>

int main(void)
{
	double a1, a2, t1, t2, b;
	char grade;
	printf(" Enter your two assignment marks\n");
	scanf("%lf %lf", &a1, &a2);
	printf(" Enter your two test marks\n");
	scanf("%lf %lf", &t1, &t2);
	printf("assignment one percent mark %.2f \n" , a1);
	printf("assignment two percent mark %.2f \n" , a2);
	printf("test one percent mark %.2f \n" , t1);
	printf("test two percent mark %.2f \n" , t2);
	
	b = (a1 + a2 + t1 + t2)/4 ;
	
	printf("The average of all your marks is %.2f \n", b);
	if (b >= 80)
	grade = 'A';
			else if (b >= 70)
				grade = 'B';
					else if (b >= 60)
							grade = 'C';
								else if (b >= 50)
									grade = 'D';
										else 
											grade = 'F';
printf("Your final grade is a: %c\n", grade);											
	
	return 0;
}

