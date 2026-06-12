#include<stdio.h>
void fabinocci(int a)
{

    int first = 0;
    int second = 1;
    printf("Fibonacci series upto 15 terms are - \n");
    printf("%d \t %d",first,second);
    for(int i = 0; i<(a-2);i++)
    {
        int next = first+second;
        first = second;
        second = next;
        printf("\t %d",next);
    }
}
int main()
{
    int n;
    printf("Enter number of term>>\n");
    scanf("%d",&n);
    fabinocci(n);
    return 0;
}