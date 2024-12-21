#include<stdio.h>
#include<math.h>

int main(){
    int a , b , c;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    if (a== 0)
    {
        if (b==0)
        {
            if(c==0){
                printf("solution-infinite equation\n");
            }else{
                printf("solution-no equation\n");
            }
        }
        
    }else{
        int delta = b*b - 4*a*c;
        if (delta < 0)
        {
            printf("solution-no equation\n");
        }else if(delta == 0){
            printf("solution-1 equation: %2.f\n", (float)-b/2*a);
        }else{
            printf("solution-2 equationL %2f, %2.f\n", (-b+sqrt(delta))/2*a, (-b-sqrt(delta))/2*a);
        }
    }
    return 0;
}