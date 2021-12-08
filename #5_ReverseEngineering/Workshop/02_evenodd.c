#include<stdio.h>

int main()
{
    printf("Enter a number and I'll tell if Even or Odd\n");
    int n;
    scanf("%d",&n);

    if(n%2 == 0)
        printf("\nEven\n");
    else
        printf("\nOdd\n");
    return 0;
}