#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,root1,root2;
    printf("Enter the value of a,b, and c to get the roots of quadratic equation: ax^2+bx+c  : \n");
    printf("Enter the value of a :");
    scanf("%f",&a);
    printf("Enter the value of b :");
    scanf("%f",&b);
    printf("Enter the value of c :");
    scanf("%f",&c);
    if((pow(b,2)-4*a*c)>=0)
    {
        root1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        root2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("The value of Root 1 :- ");
        printf("%f",root1);
         printf("\nThe value of Root 2 :- ");
         printf("%f",root2);
    }else
    {
        printf("Imaginary roots");
    }

    system ("pause>0");
}
