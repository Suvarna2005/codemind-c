#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0,d=0,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        d+=i;
        s+=(i*i);
    }
    a=d*d;
    printf("%d",abs(s-a));
}