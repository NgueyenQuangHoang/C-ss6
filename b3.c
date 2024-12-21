#include<stdio.h>

int main(){
    int passWord = 1234;
    int input;
    while (input != passWord)
    {
        printf("enter your password: ");
        scanf("%d", &input);
        if (input != passWord)
        {
            printf("wrong password\n");
        }else{
            printf("Welcome\n");
            break;
        }
    }
    return 0;
}