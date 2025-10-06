#include <stdio.h>

int main() {
    int n;

    
    printf("enter the side length ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
       
        for (int s = 1; s < i; s++) {
            printf(" ");
        }

      
        for (int s = 1; s <= i; s++) {
            printf("*");
        }

        printf("\n"); 
    }

    return 0;
}