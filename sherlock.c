#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    char str[10000];
    char ch;
    int i=0;
    while(1) {
        scanf("%c",&ch);
        if(ch == '\n') {
            str[i] = '\0';
            break;
        }
        else if (ch == ' ') {
            continue;
        }
        
        str[i] = ch;
        i++;
    }
    long length = i;
    long row = floor(sqrt(i));
    long column = ceil(sqrt(i));
    long k=0;
    for(int i=0;i<column;++i) {
        for(int j=0;j<row;++j) {
            k = ((column * j) + i);
            if(k >= length) {
                continue;
            } 
            printf("%c",str[k]);
        }
        printf(" ");
    }
}