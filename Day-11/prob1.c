#include<stdio.h>
int sum(int a, int b)
{
    int sum = a+b;
    return sum;
}
int main()
{
    printf("Enter two number>>\n");
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("%d+%d = %d",n1,n2,sum(n1,n2));
    return 0;
}