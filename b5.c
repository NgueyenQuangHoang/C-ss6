#include<stdio.h>

int main(){
    int month;
    int year;
    printf("enter month: ");
    scanf("%d", &month);
    printf("enter year: ");
    scanf("%d", &year);
    while (1)
    {
        if (month < 1 || month > 12)
        {
            printf("wrong month, enter again: ");
            break;
        }else{
            if(month ==2){
                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
                    printf("month %d has 29 days\n", month);
                    break;
                }else{
                    printf("month %d has 28 days\n", month);
                    break;
                }
            }else{
                if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
                    printf("month %d has 31 days\n", month);
                    break;
                }else{
                    printf("month %d has 30 days\n", month);
                    break;
                }
            }
        }
        
    }
    
}