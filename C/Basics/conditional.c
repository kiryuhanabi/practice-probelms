#include<stdio.h>
int main()
{

    int tk;
    scanf("%d",&tk);
    if (tk>=5000)
    {
        printf("Go to cox's bazaar\n");
        if (tk>=6000)
        {
            printf("Go to saint martin\n");

        }
        else
        {
            printf("Go to cox's bazaar only");
        }

    }
    else
    {
        printf("Don't go anywhere");
    }

    return 0;
}
