#include <stdio.h>

int main(void)
{
	int x;
	
	printf("Enter an integer: ");
	scanf("%i", &x);
	
	if (x < 0)
		x = -x;
		
	printf("%i", x);

}
