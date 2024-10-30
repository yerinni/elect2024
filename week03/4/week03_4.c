//training_4 

#include <stdio.h>

int main(void) {
    int a, b;      
    float result;   

   
    printf("Enter two integers : ");
    scanf_s("%d %d", &a, &b);  

    
    result = a / b;

    
    printf("%f / %f = %f\n", a, b, result);

    return 0;
}



