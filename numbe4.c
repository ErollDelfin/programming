#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,b,s=0,y;

    printf("Input a number: ");
    scanf("%d",&n);

    for(y=n;n!=0;n=n/10){
         b=n % 10;
         s=s*10+b;
    }
    printf("Reversed number is %d", s);
return 0;
}
