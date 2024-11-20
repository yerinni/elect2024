#include <stdio.h>

int main() {
    char word1[50], word2[50], word3[50];
    FILE *fp;

   
    printf("input a word: ");
    scanf("%s", word1);
    printf("input a word: ");
    scanf("%s", word2);
    printf("input a word: ");
    scanf("%s", word3);


    fp = fopen("sample.txt", "w");
   

    fprintf(fp, "%s\n", word1);
    fprintf(fp, "%s\n", word2);
    fprintf(fp, "%s\n", word3);

 
    fclose(fp);

    return 0;
}

	

