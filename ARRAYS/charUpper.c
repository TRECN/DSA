#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    scanf("%c",&c);
    c=tolower(c);
    printf("%c",c);
    return 0;
}