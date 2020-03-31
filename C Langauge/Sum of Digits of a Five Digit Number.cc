#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,i=5,a,sum=0;
    scanf("%d", &n);
    while(i--){
        a=n%10;
        n=n/10;
        sum+=a;
    }
    printf("%d",sum);
    return 0;
}