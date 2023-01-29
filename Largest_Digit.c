#include<stdio.h>
int main()
{
    int n,i,r,s=0,max=-999;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        if(r>max)
        {
            max=r;
        }
    }
    printf("%d",max);
}