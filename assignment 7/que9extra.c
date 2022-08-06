//9. Write a program to check whether a given number is an Armstrong number
//   or not.
#include<stdio.h>
int main()
{
    int number,count=0,result=0,rem,mul=1,cnt;
    printf("Please enter a number:");
    scanf("%d",&number);
    int q=number;
    while(q)
    {
        q=q/10;
        count++;
    }
    cnt=count;
    q=number;
    while(q)
    {
        rem=q%10;
        while(cnt)
        {
            mul=mul*rem;
            cnt--;
        }
        result=result+mul;
        q=q/10;
        cnt=count;
        mul=1;
    }
    if(result==number)
        printf("%d is an Armstrong number",number);
    else
        printf("%d is not an Armstrong number",number);
    return 0;
}