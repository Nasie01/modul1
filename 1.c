#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int N;
    do
    {
        N = get_int("N: ");
    }
    while (N <= 0);
    
    for (int i = 1; i<=N; i++)
    {
        int sq = pow(i,2);
        if (sq == N)
        {
            printf("%i\n", i);
            break;
        }
        else if (sq>N)
        {
            printf("%i\n", i-1);
            break;
        }
    }
}