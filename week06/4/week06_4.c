//week06_4

#include <stdio.h>

int main(void)
{
	int sum = 0;
	int x;
	
	printf("Enter a number : ");
	scanf("%i", &x);
	
	int i;
	for( i=0 ; i<=x ; i++ )
	
	sum += i;
	
	printf("The result is %i", sum);
}

