#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    while(n>9)
    {
        a=0;
        while(n>0)
        {
            b=n%10;
            n=n/10;
            a+=b;
        }
        n=a;
    }
    printf("%d",a);
    
}