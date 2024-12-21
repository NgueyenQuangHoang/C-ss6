#include<stdio.h>

int main(){
    int n;
    printf("enter integer n: ");
    scanf("%d", &n);
    for (int i = n; i > 0; i--)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
        
    }
    
}