#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[1000],str[200];
    scanf("%c%*c",&ch);
    scanf("%s%*c",&str);
    scanf("%[^\n]%*c",&s);
    printf("%c\n",ch);
    printf("%s\n",str);
    printf("%s\n",s);    
    return 0;
}