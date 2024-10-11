#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	int result;
	
	printf("Enter an integer: ");
	scanf("%i", &x);
	
	result = abs(x);
	printf("%i", result);
	
	
}
