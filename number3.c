#include <stdio.h>
#include <stdlib.h>

int main()
{
int n;

printf("Enter any number: ");
scanf("%d", &n);

    switch (n > 0)
    {
        case 1:
            printf("The integer is positive");
        break;

        case 0:
            switch (n< 0)
            {
                case 1:
                    printf("The integer is negative.");
                    break;
                case 0:
                    printf("The integer is zero.");
                    break;
            }
    }
    return 0;
}
