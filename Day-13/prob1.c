#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of cell in array>>\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter element in cell>>\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i = 0 ;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    return 0;
}