#include <stdio.h>

int main(int argc, char **argv)
{
	
	
	
	//The given expression can be evaluted to give us 1 && 1 && 1 which is true
	//The parantheses are not needed becuase the % operator is a higher order on the order of operations list than comparison 
	//Operators such as >= or <= 
	//Since the expression is already true(1) the not operator gives us 0 
	//And the expression would become  !(1 && (30 % 10 >= 0) && (30 % 10 <= 3))
	//If we evaluate and simplify we will be left with 0 < 0 and  0 > 3 as the two conditions and they are both false
	//the final expression we get is (30 % 10 < 0) || (30 % 10 > 3) adn since both are always false the whole thing simplifies to 0.


	
	
	return 0;
}

