#include<stdio.h>
int main()
{
    int n,b,c;
    scanf("%d",&n);
    int a[n],i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&b,&c);
    for(i=0;i<n;i++)
    {
        if((a[i]<b) || (a[i]>c))
    {
    sum=sum+a[i];
    }
    }
    printf("%d",sum);
}

