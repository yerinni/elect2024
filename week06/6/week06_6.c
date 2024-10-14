//week06_6

#include <stdio.h>

int main (void)
{
	int answer = 50;
	int x ;
	int t = 0 ;
	
	do {
		printf("Guess a number: ");
		scanf("%d", &x);
		t++;
		
		if ( x < answer )
		printf("Low!\n");
		else if ( x > answer )
		printf("High!\n");
	
}	while ( x != answer );

	printf("Congratulation! Trials: %d", t);
	
	return 0;
	
	
}
