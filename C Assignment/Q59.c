#include <stdio.h>

int main() {
    int n;

 
    printf("input a number");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= n; j++) {
            
            if (j == i || j == n - i + 1) {
              
                int val = j == i ? i : n - i + 1;
                printf("%d ", val);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}