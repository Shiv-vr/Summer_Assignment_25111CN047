#include <stdio.h>
int main()
{
    int n ;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    for(int i= 2 ; i<= n/2 ; i++)
    {
        if(n%i==0)
        {
            for(int j = 2;j<i;j++)
            {
               
                if(i%j == 0)
                {
                    break;
                }
                else if(j==i-1)
                {
                    printf("Prime factor = %d \n",i);
                }
            }
            if(i==2)
            {
                printf("Prime factor = %d \n",i);
            }
        }
    }
    return 0;
}