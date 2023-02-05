#include<stdio.h>
int main()
{
    int b,c,d,a=0;
    scanf("%d%d%d",&b,&c,&d);
    for(b;b<=c;b++)
    {
        if(b%d==0)
        {
            a++;
        }
    }
    printf("%d",a);
}