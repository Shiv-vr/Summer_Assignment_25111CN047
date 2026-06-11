#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    for(int i= a;i>1;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    printf("Factorial of %d = %d",n,factorial(n));
    return 0;
}