

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5




int main(void)

/*
{
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for(i=0;i<SIZE;i++)
		grade[i] = rand() % 100;
		
	for(i=0; i<SIZE; i++)
		score[i] = grade[i];
		
		
	for(i=0; i<SIZE; i++)
		printf("score[%d] = %d\n", i, score[i]);
		
	return 0;
}

*/


{
	int i;
	int a[SIZE] = {1,2,3,4,5};
	int b[SIZE] = {1,2,3,7,10};
	int flag_same = 1;
	
	
	for (i=0;i<SIZE;i++)
	{
	if (a[i] != b[i])
	{
	  printf("%d", i);
	  flag_same = 0;
	}
}

}



















