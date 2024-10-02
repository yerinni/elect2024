#include <stdio.h>

int main (void) {
	int sec, min, sec2;
	
	printf("Input the second: ");
	scanf("%i", &sec);
	
	min = sec / 60;
	sec2 = sec % 60;
	
	printf("The time is %d : %d", min, sec2);
	
}
