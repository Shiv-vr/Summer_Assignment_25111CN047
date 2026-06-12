#include <stdio.h>
int palindrome_check(int a)
{
    int rev=0;
    while(a!=0)
    {
        int rem = a%10;
        rev = rev*10+rem;
        a=a/10;
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter a number to check palindrom or not>>\n");
    scanf("%d",&n);
    if(n==palindrome_check(n))
    {
        printf("Number is palindrome");
    }
    else
    {
        printf("Number is not palindrome");
    }
    return 0;
}