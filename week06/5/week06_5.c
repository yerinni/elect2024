//week06_5

#include <stdio.h>

int main (void)
{
	int x, y;
	char z;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d", &x, &z, &y );
	
	if (z == '+')
		printf( "=%i\n", x + y );
	else if (z == '-') 
		printf( "=%i\n", x - y );
	else if (z == '*') 
		printf( "=%i\n", x * y );
	else
		printf( "=%i\n", x / y );
		
	return 0;

}
