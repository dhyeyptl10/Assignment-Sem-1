#include<stdio.h>
int main () {

int n;
printf ("input a number");
scanf ("%d",&n);

for (int i=1 ; i<n;i++)
{
   printf ("%d\t%d\t%d\n", i , n-i+1 ,i);
}
for ( int j=n ;j>=1;j--) {
printf ("%d ",j); }

 for (int i = 2; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

   
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <  (n+1)- n; j++) {
            printf("\t");
        }
        printf("%d\n", i);
    }
 



   return 0;
}