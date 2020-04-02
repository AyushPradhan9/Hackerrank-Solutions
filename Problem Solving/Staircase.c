#include<stdio.h>
main()
{
    int n,k;
    scanf("%d",&n);
    k=n;
    for(int i=0;i<k;i++)
    {
        for(int j=1;j<n;j++)
        printf(" ");
        n--;
        for(int j=0;j<=i;j++)
        printf("#");
        printf("\n");
    }
}