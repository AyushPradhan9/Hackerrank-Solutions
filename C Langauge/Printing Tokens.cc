#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0;
    char s[1000];
    gets(s);
    while(s[i]!='\0'){
        if(s[i]!=' '){
            printf("%c",s[i]);
        }
        else{
            printf("\n");
        }
        i++;
    }
    return 0;
}