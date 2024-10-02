#include <stdio.h>

int main(void) {
	int x, y;
	int a, b, c, d, e;
	
	printf("Input two integers: ");
	scanf("%i %i", &x, &y);
	
	a = x + y;
	b = x - y;
	c = x * y;
	d = x / y;
	e = x % y;
	
	printf("+ result is %d\n- result is %d\n* result is %d\n/ result is %d\n%% result is %d", a, b, c, d, e);
}


