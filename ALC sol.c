#include <stdio.h>
#include <stdlib.h>
int main() {
    char s[1001];
    int x,c=0;
    fgets(s,1001,stdin);
    scanf("%d",&x);
    for(int i=0;i<strlen(s);i++){
        if(c==x){
            i=i+x-1;
            c=0;
            continue;
        }
        printf("%c",s[i]);
        c++;
    }
}
