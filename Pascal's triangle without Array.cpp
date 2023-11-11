//Pascal's triangle in C
#include <stdio.h>
int fact(int n)
{
    //finding factorial of the number
    int result=1;
    if (n<=1)
    return 1;
    for (int i=2; i<=n; i++)
    {
        result *= i;
    }
    return result;
}

int BinomialCoefficient(int n, int k)
{
    return (fact(n)/(fact(k)*fact(n-k)));
}

void PrintTriangle(int rows)
{
    for (int i=0; i<rows; i++)
    {
        for(int j=0; j<rows-i; j++)
        {
            printf("   ");
        }
        for(int j=0; j<=i; j++) {
            printf("%5d ",BinomialCoefficient(i,j));
        }
        printf("\n");
    }
}

int main()
{
    int rows;
    printf("Enter the number of rows for Pascal's triangle: ");
    scanf("%d", &rows);
    if (rows<1)
    {
        printf("Enter a positive integer.\n");
        return 1;
    }
    PrintTriangle(rows);
    return 0;
}
