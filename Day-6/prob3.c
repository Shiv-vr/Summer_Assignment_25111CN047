#include<stdio.h>

int main()
{
    int n;
    printf("Enter number >>\n");
    scanf("%d",&n);
    int bit_count=0;
    int copy = n;
    while(copy!=0)
    {
        int rem = copy%2;
        if(rem==1)
        {
            bit_count++;
        }
        copy = copy/2;
        
    }
    
    printf("No. of bit in %d = %d",n,bit_count);
    return 0;
}