#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=n*(n+1)/2;
    }
    printf("%d",s);
}