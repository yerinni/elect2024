#include <stdio.h>
#5

int main (void) {
	int x, y;
	int a, b, c, d, e;
	printf("Input the integers: ");
	scanf("%i %i", &x, &y);
	
	a = x & y;
	b = x | y;
	c = x ^ y;
	d = x <<1; y;
	e = x >>1; y;
	
	printf("& result is %d\n| result is %d\n^ result is %d\n<<1 result is %d\n>>1 result is %d", a, b, c, d, e);
	
}
