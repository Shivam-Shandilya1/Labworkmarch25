#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number to get factorial :- ");
    scanf("%d",&num);
    printf("Factorial of ");
    printf("%d",num);
    printf(" ! : ");
    if(num==0)
    {
        printf("1");
    }else if(num<0)
    {
        printf("Cannot calculate the factorial for negative input");
    }else
    {
        for(int i=num-1;i>=1;i--)
        {
            num*=i;
        }
        printf("%d",num);
    }

    system("pause>0");
}
