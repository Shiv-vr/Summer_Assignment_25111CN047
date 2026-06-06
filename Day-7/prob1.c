#include<stdio.h>
int factorial(int n)
{
    if(n==1||n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    printf("Enter a number to find factorial >>\n");
    int num;
    scanf("%d",&num);
    
    printf("Factorial of %d = %d",num ,factorial(num));

    return 0;
}