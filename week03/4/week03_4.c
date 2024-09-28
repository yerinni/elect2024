//training_4 

#include <stdio.h>

int main(void) {
    int a, b;      
    float result;   

   
    printf("Enter two integers : ");
    scanf_s("%d %d", &a, &b);  

    
    result = (float)a / (float)b;

    
    printf("%f / %f = %f\n", (float)a, (float)b, result);

    return 0;
}



