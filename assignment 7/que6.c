//6. Write a program to print all Prime numbers under 100.
#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    printf("Prime numbers under %d\n",a);
    for(i=2;i<=a;i++)
    {
        for(j=2;j<=a;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf(" %d",i);
    }
    return 0;
}