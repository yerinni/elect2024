//week06_3 

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	int num = 0;
	
	printf("Input a string: ");
	scanf("%c", &c);
	
	while( (c=getchar()) != '\n')
	{
		i = c - '0';


		if (i < 10 && i >=0)
			num += 1;
}
	printf("The number of digits is %i", num);

	return 0;
}
