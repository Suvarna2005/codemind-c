#include<stdio.h>
int main()
{
    int min,max,i;
    scanf("%d%d",&min,&max);
    for(i=max;i>=min;i--)
    {
        printf("%d ",i);
    }
}