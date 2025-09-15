#include<stdio.h>
int main()
{
 int n;
printf("enter the number :");
scanf("%d",&n);
for( int i=0;i<=n-1;i++){
   if(n<=26){
    printf("%c ",'A'+i);
   }
   else{
    printf(" empty");
   }
   
}
return 0;
}