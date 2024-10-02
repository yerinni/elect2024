#include <stdio.h>

int main (void) {
	int year;
	
	printf("Input the year: ");
	scanf("%i", &year);
	
	printf("Is the year %d the leap year? %d", year, year % 4 == 0 && year %100 != 0 || year % 400 == 0 );
	
}
