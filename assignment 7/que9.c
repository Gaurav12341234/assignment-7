//9. Write a program to check whether a given number is an Armstrong number
//   or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,count=0,result=0,i,rem;
    printf("Enter a number:");
    scanf("%d",&a);
    b=a;c=a;
    while(a)
    {
        count++;
        a/=10;
    }
    for(i=1;i<=count;i++)
    {
        rem=b%10;
        result=result+pow(rem,count);
        b/=10;
    }
    if(result==c)
        printf("That number is an Armstrong number");
    else
        printf("That number is not an Armstrong number");
    return 0;
}