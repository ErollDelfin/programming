#include <stdio.h>
#include <stdlib.h>

int main()
{

int a;
char b[40];

printf("Input your name: ");
fgets(b, sizeof(b), stdin);
printf("Input your age: ");
scanf("%d", &a);

if (a>=18)
{
    printf("Name: %s", b);
    printf("Age: %d\n", a);
    printf("You are eligible for voting.");
}
    else if (a==0)
    {
        printf("Name: %s", b);
        printf("Age: %d\n", a);
        printf("Invalid Age, Please Try Again.");
    }
else
{
    printf("Name: %s", b);
    printf("Age: %d\n", a);
    printf("You are not eligible for voting.");
}
    return 0;
}

