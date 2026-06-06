#include<stdio.h>
int fabonacci(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
    {
        return 1;
    }
    else
    {
        return fabonacci(a-1)+fabonacci(a-2);
    }
}
int main()
{
    int n;
    printf("Enter number of term to generate fabonacci series>>\n");
    scanf("%d",&n);
    for(int i = 0 ; i<=n ; i++)
    {
        printf("%d\t",fabonacci(i));
    }
}