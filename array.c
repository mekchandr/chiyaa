#include<stdio.h>
void main()
{
    int c,b,g[100],i,y=0;
    printf("enter the value for c :");
    scanf("%d",&c);
    printf("enter the value of b:");
    scanf("%d",&b);
    printf("enter an array:");
    for(i=0;i<c;i++)
    {
        scanf("%d",&g[i]);
    }
    for(i=0;i<b;i++)
    {
        y+=g[i];
    }
    printf("%d",y);
        return 0;
}
