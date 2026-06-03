#include <stdio.h>
int main()
{
    int n,fact,s_no=0;
    printf("Enter a number a number >>\n");
    scanf("%d",&n);
    int copy = n;
    while(copy!=0)
    {
        fact =1;
        int r = copy%10;
        for(int i = r;i>0;i--)
        {
            fact=fact*i;
        }
        s_no=s_no+fact;
        copy = copy/10;
    }
    if(s_no == n)
    {
        printf("%d is strong number",n);
    }
    else{
        printf("GIVEN NUMBER IS NOT A STRONG NUMBER:((");
    }

    return 0;

}
