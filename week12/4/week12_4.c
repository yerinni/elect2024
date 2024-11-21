#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int count;
	int grade[5];
	int *ptr = grade;
	
	
	for(i=0;i<5;i++)
	{
		printf("input value-grade[%i]=", i);
		scanf("%d", &grade[i]);
		
	}
	
	for (i = 0; i < 5; i++) {
        
		printf("grade[%i] = %d\n", i, *(ptr + i)); 
        sum += *(ptr + i); 
        count++;

    }

    printf("average: %d\n", sum / count); 
	
	
	return 0;
	
}
