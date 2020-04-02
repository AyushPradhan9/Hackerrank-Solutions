#include<stdio.h>
main()
{
    int a[100],b[100],x=0,y=0;
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            x++;
        }
        if(a[i]<b[i])
        {
            y++;
        }
    }
    printf("%d %d",x,y);
}