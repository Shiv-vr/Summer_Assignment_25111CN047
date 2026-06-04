#include<stdio.h>
int main()
{
    int n;
    int ar[30];
    int i =0;
    printf("Enter number >>\n");
    scanf("%d",&n);
    int copy = n;
    while(copy!=0)
    {
        int rem = copy%2;
        ar[i]=rem;
        copy = copy/2;
        i++;
    }
    printf("Binary of %d = ",n);
    for(int j = i-1;j>=0;j--)
    {
        printf("%d",ar[j]);
    }
    return 0;
}