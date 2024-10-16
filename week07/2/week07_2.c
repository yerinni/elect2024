//week07_2
//sumTwo

#include <stdio.h>

int sumTwo(int a, int b)
{
	int result1;
	result1 = a + b;
	
	printf("Result = Sum: %d, ", result1);
	return result1;
	
}

int square(int n)
{
	int result2;
	result2 = n * n;
	
	printf("Square: %d, ", result2);
	return result2;
}

int get_max(int x, int y)
{
	if ( x > y) {
		printf("Max: %d\n", x);
		return x;
	} 
	else 
	{	printf("Max: %d\n", y);
		return y;
	}
	
}



int main (void)
{
	int e, f;
	
	printf("Enter the integers: ");
	scanf("%d %d", &e, &f);
	
	int sum = sumTwo(e, f);  
    int sqr = square(e);   
    int max = get_max(e, f);
	
}
