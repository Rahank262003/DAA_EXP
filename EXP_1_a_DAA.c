#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    double n;
    double temp;
    printf("Enter the value of n:\n");
    scanf("%lf", &n);
    for (double i = 0; i <= n; i++)
    {
        // int result;
        // result = factorial(i);
        // printf("The factorial of %lf is %d\n", i, result);
        // printf("%d\n", result);

        // temp=pow(1.5,i);
        // temp=pow(i,3.0);
        // temp=pow(2.0,pow(2.0,i));
        // temp=n*pow(2.0,i);
        // temp=n;
        // temp=pow(2.0,i);
        // temp=exp(i);
        // temp=pow(2.0,log2(i));
        // temp=log(i);
        // temp=pow(2.0,log2(i));

        // printf("%lf\n", temp);
    }
}
