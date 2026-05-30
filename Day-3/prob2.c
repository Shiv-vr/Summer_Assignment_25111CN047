#include<stdio.h>
int main()
{
    int ul,ll;
    int count=0;
    printf("Enter upper and lower limit of range respectively>>\n");
    scanf("%d %d",&ul ,&ll);
    for(int i = ll; i<=ul ; i++)
    {
        for(int j =2 ; j<=i/2 ; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
    }
    int prime = (ul-ll)-count;
    printf("No. of prime in given range is %d",prime);
    
    return 0;
}