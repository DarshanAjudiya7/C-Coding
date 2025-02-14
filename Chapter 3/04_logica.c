#include <stdio.h>

int main() {

    int a = 0 , b = 1 ;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) id %d", !a);

    if(a&&b){

        printf("both are true\n");
    }

    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
} 
