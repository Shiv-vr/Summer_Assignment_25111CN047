#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number n>>\n");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        int rem= n%10;
        rev = rev*10+rem;
        n= n/10;
        }
        printf("Reverse of number is %d",rev);
    return 0;
}