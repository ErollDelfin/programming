#include <stdio.h>
#include <stdlib.h>

int main()
{
float z, x, addition, multiply, divide, substract;

printf("Enter an Integer: ");
scanf("%f", &z);
printf("Enter another Integer: ");
scanf("%f", &x);

addition = z+x;
printf("The sum of both integers is: %.f\n", addition);

multiply = z*x;
printf("The product of both integers is: %.f\n", multiply);

divide = z/x;
printf("The quotient of both integers is: %.1f\n", divide);

substract = z-x;
printf("The difference of both integers is: %.f\n", substract);

    return 0;
}
