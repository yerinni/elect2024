//week13_3 


#include <stdio.h>
#define STUDENTNUM 4

struct student{
	
	int ID;
	int score;
	
};

void main(void)

{
	
	struct student s[STUDENTNUM];
	
	int max_ID = 0;
	int max_S = 0;
	int sum = 0;
	int i;
	
	for (i=0; i<STUDENTNUM; i++)
	{
		
		printf("Input the ID: ");
        scanf("%d", &s[i].ID);
        printf("Input the score: ");
        scanf("%d", &s[i].score);
        
        sum += s[i].score;
        
        
        if (s[i].score > max_S) {
        	max_S = s[i].score;
        	max_ID = i;
		}

	}
	
	double average = (double)sum / STUDENTNUM;
	
	
	printf("The average of the score: %f", average);
	printf("The highest score - ID: %d, score: %d", s[max_ID].ID, s[max_ID].score);
	

}


