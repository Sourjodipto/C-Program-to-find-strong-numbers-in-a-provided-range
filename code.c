#include <stdio.h>

int main()
{
    int n, r, i, sum, fact, k, llimit, ulmit;
    printf("Enter lower limit and upper limit respectively, seperated by a space: ");
    scanf("%d %d", &llimit, &ulmit);
    for (n = llimit; n <= ulmit; n++)
    {
        sum = 0;
        k = n;
        while (k > 0)
        {
            r = k % 10;
            fact = 1;
            for (i = 1; i <= r; i++)
            {
                fact = fact * i;
            }
            sum = sum + fact;
            k = k / 10;
        }
        if (sum == n)
        {
            printf("The strong number is %d\n", n);
        }
    }
    
}
