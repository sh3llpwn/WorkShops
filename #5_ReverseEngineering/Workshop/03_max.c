#include <stdio.h>

void max()
{
    int A, B, C;
  
    printf("Enter 3 numbers and I'll print the max of 3: ");
    scanf("%d %d %d", &A, &B, &C);
  
    if (A >= B && A >= C)
        printf("%d is the largest number.", A);
  
    if (B >= A && B >= C)
        printf("%d is the largest number.", B);
  
    if (C >= A && C >= B)
        printf("%d is the largest number.", C);
}
int main()
{
    max();
    return 0;
}