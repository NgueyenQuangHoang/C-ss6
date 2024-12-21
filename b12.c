#include<stdio.h>

int main(){
    int n, a = 0, b = 1, nextNum;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
       if(i <= 1){
        printf("%d ", i);
    }else{
        nextNum = a + b;
        a = b;
        b = nextNum;
        printf("%d ", nextNum);
    }
    }
}