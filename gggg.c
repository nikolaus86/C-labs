#include <stdio.h>
#include <math.h>
int main()
{    float a, b,x,chast,razn;

    printf("Enter a -> ");
    scanf("%f", &a);
    printf("Enter b -> ");
    scanf("%f", &b);
    printf("Enter x -> ");
    scanf("%f", &x);
    if (a*b<x){
        chast=(a*b)/x;
        printf("%f",chast);
    }
    else{
        razn=a*b-x;
        printf("%f",razn);
    }
    if (a*b==x){
        printf("oni ravni");
    }


    return 0;
}
