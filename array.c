#include <stdio.h>
#include <stdlib.h>

int sumofarray(int a[],int b,int i)
 {
    if(i<b)
    return a[i]+sumofarray(a,b,++i);

    return 0;

 }
int main()
{
    int a[1000],i,b,sum;

        printf("Enter size of the array: ");
        scanf("%d", &b);

    for (i=0; i<b; i++)
{
        printf("Enter elements in array: ");
        scanf("%d", &a[i]);
}

    sum=sumofarray(a,b,0);
        printf("Sum of all array elements: %d",sum);

}
