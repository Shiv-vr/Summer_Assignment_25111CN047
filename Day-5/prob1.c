#include <stdio.h>
int main()
{
    int n;
    int p_no= 0;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    for(int i = 1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            p_no = p_no+i;
        }
    }
    if(n==p_no)
    {
        printf("%d is a perfect number",n);
    }
    else{
        printf("%d is not perfect number",n);
    }
    return 0;
}