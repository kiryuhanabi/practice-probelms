#include<stdio.h>
int main()
{
    long long int sum = 0; // int can only contain upto 9 digits
    int i;
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        sum+=i;
    }
    printf("%lld",sum);
    return 0;
}
