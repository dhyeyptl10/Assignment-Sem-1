#include <stdio.h>

int main() {
    int rows;

   
    printf("Enter number of rows: ");
    scanf("%d", &rows);

   
    for (int i = 1; i <= rows; i++) {
  
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (int num = 1; num <= (2 * i - 1); num++) {
            printf("%d", num);
        }


        printf("\n");
    }

    return 0;
}