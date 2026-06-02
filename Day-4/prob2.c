#include <stdio.h>
int main()
{   
    printf("Enter number n >>\n");
    int n;
    scanf("%d",&n);
    int first = 0;
    int second = 1;
    int next;
    for(int i =1;i<=n-2;i++)
    {
        next = first+second;
        first = second;
        second = next;
    }
    printf("nth term of series = %d",next);
    return 0;
}