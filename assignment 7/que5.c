//5. Write a program to check whether two given numbers are co-prime
//   numbers or not.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    while(a!=b)
    {
        if(a>b)
            a=a-b;
        else
            b=b-a;
    }
    if(a==1)
        printf("That numbers are \"Co-Prime number\"");
    else
        printf("That numbers are \"Not Co-Prime number\"");
}
