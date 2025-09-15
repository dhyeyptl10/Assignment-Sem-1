#include <stdio.h>

int main() {
    int rows;


    printf("Enter number of rows: ");
    scanf("%d", &rows);

 
    for (int i = 1; i <= rows; i++) {
       
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        char ch = 'A';
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("%c", ch);
            ch++;
        }

       
        printf("\n");
    }

    return 0;
}