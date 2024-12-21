#include<stdio.h>

int main(){
    int deposit;
    int month;
    float interestMonth;
    float total;
    const float interestRate = 0.01;
    printf("enter deposit: ");
    scanf("%d", &deposit);
    printf("enter month: ");
    scanf("%d", &month);
    int sumInterest = 0;
    int interest = deposit;
    for (int i = 0; i < month; i++)
    {   
        sumInterest +=(interest*interestRate);
        interestMonth = deposit * interestRate;
        total = deposit + interestMonth;
        deposit = total;
    }
    printf("total: %f", total);
    printf("\n");
    printf("sumInterest: %f", sumInterest);
}