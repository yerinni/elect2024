//week07_4
//combination

#include <stdio.h>

int get_integer();      
int combination(int n, int r);  
int factorial(int num);  

int main(void)
{
    int n, r, result;

  
    printf("Enter the value:  ");
    n = get_integer();    

    printf("Enter the value:  ");
    r = get_integer();   


    result = combination(n, r);

  
    printf("The result of C(%d, %d) is %d.\n", n, r, result);

    return 0;
}


int combination(int n, int r)
{

    return factorial(n) / (factorial(n - r) * factorial(r));
}


int factorial(int num)
{
    int res = 1;
    int i = 1;
    for (i = 1; i <= num; i++)
        res *= i;
    return res;
}


int get_integer()
{
    int input;
    scanf("%d", &input);
    return input;
}

