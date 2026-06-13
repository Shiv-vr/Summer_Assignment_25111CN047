#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of cell>>\n");
    scanf("%d",&n);
    int odd_count=0;
    int even_count=0;
    int ar[n];
    printf("Enter number in array>>\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            even_count++;
        }
        else{
            odd_count++;
        }
    }

    printf("No. of Even number = %d\nNo. of odd number = %d",even_count,odd_count);
    

    return 0;
}