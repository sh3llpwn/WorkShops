#include<stdio.h>
void factors(int n)
{
    if(n == 0)                                          
        printf("Every number is a factor of zero\n");
    else if(n == 1)
        printf("Factor : 1\n");
    else
    {
        printf("Factors : ");
        for(int i = 1;i<=n;i++)               
        {
            if(n%i == 0)
                printf("%d ",i);
        }
        printf("\n");
    }
}

int main()
{
    printf("Enter a positive number and I'll tell its factors\n");
    unsigned int n;
    scanf("%d",&n);
    factors(n);
    return 0;
}
