#include <stdio.h>
int main()
{
    int first = 0;
    int second = 1;
    printf("Fibonacci series upto 15 terms are - \n");
    printf("%d \t %d",first,second);
    for(int i = 0; i<15;i++)
    {
        int next = first+second;
        first = second;
        second = next;
        printf("\t %d",next);
    }
    return 0;
}