#include<stdio.h>
main()
{
    int n;
    long ar[100],sum=0,m;
    scanf("%d",&n);
    if(n<=10)
    {
        for(int i=0;i<n;i++)
        {
            scanf("%li",&ar[i]);
        }
        for(int i=0;i<n;i++)
        {
            m=ar[i];
            sum+=m;
        }
    }
    printf("%li",sum);
}