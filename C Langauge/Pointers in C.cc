#include<stdio.h>
void sumdiff(int *a,int *b)
{
    int *s,*d;
    s=(*a)+(*b);
    d=abs((*a)-(*b));
    printf("%d\n%d",s,d);
}
int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    sumdiff(&a,&b);
    return 0;
}