//4. Write a program to calculate HCF of two numbers.
#include<stdio.h>
int main()
{
    int a,b,i,hcf;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a*b;i++)
        if(i%a==0&&i%b==0)
            break;
    printf("LCM of %d and %d is %d\n",a,b,i);
    hcf=a*b/i;
    printf("HCF of %d and %d is %d",a,b,hcf);
    return 0;
}
