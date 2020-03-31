#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float a,b;
    scanf("%d %d",&x,&y);
    scanf("%f %f",&a,&b);
    x=x+y;
    printf("%d ",x);
    x=x-y;
    y=x-y;
    printf("%d\n",y);
    a=a+b;
    printf("%0.1f ",a);
    a=a-b;
    b=a-b;
    printf("%0.1f\n",b);
    return 0;
}