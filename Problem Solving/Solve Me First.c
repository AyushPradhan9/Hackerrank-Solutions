#include<stdio.h>
int solveMeFirst(int a,int b);
main()
{
    int x,y,s;
    s=solveMeFirst(x,y);
    printf("%d",s);
}
int solveMeFirst(int a, int b)
{
    scanf("%d",&a);
    scanf("%d",&b);
    int sum=a+b;
    return sum;
}