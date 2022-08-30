#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char str[1000];
    int i,c,d='0';
    scanf("%s",str);   
    while(d<='9')
    {
        c=0;i=0;
        while(i<strlen(str))
            str[i++]==d?c++:0;
        printf("%d ",c);
        d++;
    }   
    return 0;
}
