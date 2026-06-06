#include<stdio.h>
int digit_sum(int a)
{
    if(a==0)
    {
        return 0;
    }
    else{
        return (a%10)+digit_sum(a/10);
    }
}
int main()
{
    int n;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    printf("Sum of digit = %d",digit_sum(n));
    return 0;
}