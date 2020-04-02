#include<stdio.h>
#include<stdlib.h>
main()
{
    int arr[100][100],n,b,k,m,sum=0,sum1=0,final;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&b);
            if(b<=100 && b>=(-100))
            {
                arr[i][j]=b;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        m=arr[i][i];
        sum+=m;
    }
    for(int i=0;i<n;i++)
    {
        k=arr[i][n-i-1];
        sum1+=k;
    }
    final=abs(sum1-sum);
    printf("%d",final);
}