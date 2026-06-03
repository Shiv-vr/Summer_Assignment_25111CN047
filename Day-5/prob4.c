#include <stdio.h>
int main()
{
    int greatest =1;
    int n;
    int prime = 1;
    
    printf("Enter a number>>\n");
    scanf("%d",&n);
    for(int i =2 ; i<=n ; i++)
    {
        
        while(n%i==0)
        {
            greatest = i;
            n=n/i;
        }    
        
    }
    printf("Greatest prime factor = %d ",greatest);
    return 0;
}