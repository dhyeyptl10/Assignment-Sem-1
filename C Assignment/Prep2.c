#include<stdio.h>
int main () {

    int n ;
    printf ("input a number");
    scanf ("%d",&n);

    for (int i = 1 ; i < (2 * n)-1 ; i++)
    { printf (" ");}
    for ( int i = 1 ; i<=n;i++ )
    { printf ("%d ",i);}

  for (int i = 1 ; i < (2 * n)-2 ; i++)
  { printf (" ");}
  printf ("2");
  
  for (int i = 1 ; i < (2 * n)-3 ; i++)
  { printf (" ");}
  printf ("3");

  
  for (int i = 1 ; i < (2 * n)-4 ; i++)
  { printf (" ");}
  printf ("4");

  
  for (int i = 1 ; i < (2 * n)-5 ; i++)
  { printf (" ");}
  printf ("5");



    return 0;
}