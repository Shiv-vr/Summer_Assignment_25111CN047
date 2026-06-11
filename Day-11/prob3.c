#include<stdio.h>
int prime_check(int a)
{
    int check = 1;
    for(int i = 2;i<a/2;i++)
    {
        if(a%i==0)
        {
            check = 0;
            break;
        }
    }
}
int main()
{
    printf("Enter a number>>>\n");
    int n;
    scanf("%d",&n);
    if(prime_check(n))
    {
        printf("%d is a prime number",n);
    }
    else{
        printf("%d is not prime number",n);
    }
    return 0;

}