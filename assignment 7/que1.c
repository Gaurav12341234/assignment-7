//1. Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("%dth term of the fibonnaci series is %d",n,c);
    return 0;
}