#include<stdio.h>
main()
{
    int ar[1000],n,sum=0,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int j=0;j<n;j++)
    {
        k=ar[j];
        sum=sum+k;
    }
    printf("%d",sum);
}