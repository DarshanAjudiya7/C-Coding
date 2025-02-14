#include<stdio.h>

int main(){

    char ch = '7';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97,122

    if(ch >=97 && ch<=122){
        printf("This is a lowercase value\n");
    }

    else{
         printf("This is a not lowercase value\n");
    }

    // https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
}