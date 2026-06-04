#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a number >>\n");
    scanf("%d",&n);
    printf("Enter power of number >>\n");
    scanf("%d",&x);
    int num=1;
    for(int i = 1;i<=x;i++)
    {
        num = num*n;
    }    
    printf("%d to the power %d = %d",n,x,num);
    return 0;
}