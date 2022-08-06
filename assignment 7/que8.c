//8. Write a program to find next Prime number of a given number.
#include<stdio.h>
int main()
{
    int a,i,j;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        a++;
        for(j=2;j<=a;j++)
        {
            if(a%j==0)
                break;
        }
        if(j==a)
        {
            printf(" %d",a);
            break;
        }
    }
    return 0;
}