//3. Write a program to check whether a given number is there in the Fibonacci
//   series or not.
#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
            break;
    }
    if(i==n+1)
        printf("That number is not in fibonacci series");
    else
        printf("That number is in fibonacci series");
    return 0;
}