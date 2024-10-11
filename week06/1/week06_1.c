//week06_1


#include <stdio.h>

int main (void)
{
	int x;
	printf("Enter an integer: ");
	scanf("%i", &x);
	
	if (x > 0)
		printf("This is positive number.\n");
		else if (x < 0)
			printf("This is negative number.\n");
		else 
			printf("This is 0.");
		
}
