#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number n>>\n");
    scanf("%d",&n);
    int rev=0;
    int n_cp = n;
    while(n!=0)
    {
        int rem= n%10;
        rev = rev*10+rem;
        n= n/10; 
    }
    if(n_cp==rev)
        printf("Number is palindrome");
    else
        printf("Number is not palindrome");
    
    return 0;
}