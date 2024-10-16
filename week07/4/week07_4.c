//week07_4
//combination

#include <stdio.h>

int combination(int n, int r) {
    if (r > n) {
        return 0;  // 조합 계산에서 r이 n보다 클 수 없으므로 0 반환
    }
    
    int result = factorial(n) / (factorial(r) * factorial(n - r));
    return result;
}


int factorial(int n) 
{
   
    if (n == 0 || n == 1) {
        return 1;  // 0! = 1, 1! = 1
    }
    int res = 1;
    int i = 2;
    for (i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}


int get_integer(int n, int r)
{
	
	printf("Enter the value: ");
	scanf("%d", &n);
	
	printf("Enter the value: ");
	scanf("%d", &r);
	
}


int main(void)
{
	int a, b;
	int result2 = get_integer(a, b);
	int result = combination(a, b);
	
	printf("The result of C(%d, %d) is %d", a, b, result);
	
	return 0;
}
