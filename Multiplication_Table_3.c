#include<stdio.h>
int main()
{
    int n,i,max,min;
    scanf("%d%d%d",&n,&min,&max);
    for(i=min;i<=max;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}