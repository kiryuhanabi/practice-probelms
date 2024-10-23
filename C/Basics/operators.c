
#include<stdio.h>
int main()
{
    //int a=10 , b =5;
    int a,b;
    scanf("%d %d",&a,&b);
    float div = a*1.0/b; // normally the compiler would give the result for division 10/7 = 1, so to make it float, we make one variable float by multiplying with 1.0, then we store it in float, and print as float

    printf("%f",div);
    return 0;
}
// operators -> +,-,*,/,%
// logical operators -> AND(&&), OR(||)
