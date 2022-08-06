//10. Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
int main()
{
    int n,q,rem,result,mul=1,count,cnt;
    printf("Armstrong numbers are:\n");
    for(n=1;n<=1000;n++)
    {
        result=0;
        q=n;
        count=0;
        while(q)
        {
            q=q/10;
            count++;
        }
        q=n;
        cnt=count;
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
        if(result==n)
            printf(" %d",n);
    }
    return 0;
}