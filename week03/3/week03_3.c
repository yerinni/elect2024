#include <stdio.h>

int main() {
    char c;       
    char next_c;


    printf("Enter a character: ");
    scanf(" %c", &c);  

    
    next_c = c + 1;

    
    printf("The next character of '%c' (%i) is '%c' (%i)\n", c, c, next_c, next_c);

    return 0;
}

