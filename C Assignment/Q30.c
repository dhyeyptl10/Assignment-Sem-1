#include <stdio.h>
int main () {

int n ; 
printf ("input a number");
scanf ("%d",&n);

for ( int i =1 ; i<=n ; i++) {

    for (int j = i ; j < n ; j++) {printf (" ");}

    for (int j=0; j<i ; j++ ) {
    printf ("%c", 'A' + j) ;}

    for (int j = i-2 ; j>=0;j--)
    {printf ("%c",'A'+ j) ;}
    printf ("\n");

}

for (int i = n-1 ; i >= 1 ; i--)
{ for ( int j = n ; j >i;j--); {printf (" ");}

for ( int j =0 ; j<i;j++) { printf ("%c",'A'+j);}


for ( int j = i-2 ;j>=0; j--) {printf ("%c",'A'+j);}

printf ("\n");

}






    return 0;
}