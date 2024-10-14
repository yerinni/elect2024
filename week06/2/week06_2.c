#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int result;
	
	printf("Enter an integer: ");
	scanf("%i", &x);
	
	if (x < 0)
		x = -x;
		
	printf("%i", x);
	
	
	
}
