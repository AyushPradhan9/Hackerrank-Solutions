#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char ch[1000];
    int i=0,n[10]={0};
    scanf("%s",&ch);
    while(ch[i]!='\0'){
        if(ch[i]=='0'){
            n[0]++;
        }
        else if (ch[i]=='1'){
            n[1]++;
        }
        else if (ch[i]=='2'){
            n[2]++;
        }
        else if (ch[i]=='3'){
            n[3]++;
        }
        else if (ch[i]=='4'){
            n[4]++;
        }
        else if (ch[i]=='5'){
            n[5]++;
        }
        else if (ch[i]=='6'){
            n[6]++;
        }
        else if (ch[i]=='7'){
            n[7]++;
        }
        else if (ch[i]=='8'){
            n[8]++;
        }
        else if (ch[i]=='9'){
            n[9]++;
        } 
        i++;
    }
    for(int i=0;i<10;i++){
        printf("%d ",n[i]);
    }
    return 0;
}
