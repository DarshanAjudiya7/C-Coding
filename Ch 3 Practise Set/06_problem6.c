#include<stdio.h>

int main(){

    int num1,num2,num3,num4;
    printf("Enter number1: \n");
    scanf("%d", &num1);
    printf("Enter number2: \n");
    scanf("%d", &num2);
    printf("Enter number3: \n");
    scanf("%d", &num3);
    printf("Enter number4: \n");
    scanf("%d", &num4);

    if(num1>num2 && num1>num3 && num1>num4){
        printf("The greatest of all is %d", num1);
    }

    else if(num2>num1 && num2>num3 && num2>num4){
        printf("The greatest of all is %d", num2);
    }

    else if(num3>num2 && num3>num1 && num3>num4){
        printf("The greatest of all is %d", num3);
    }

    else if(num4>num2 && num4>num3 && num4>num1){
        printf("The greatest of all is %d", num4);
    }


}