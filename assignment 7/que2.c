//2. Write a program to print first N terms of Fibonacci series.
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("enter a no.");
    scanf("%d",&n);
    printf("first %d terms of fibonacci series:\n",n);
    printf(" %d",b);
    for(i=1;i<=n-1;i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    return 0;
}
