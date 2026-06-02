#include <stdio.h>
#include <math.h>

int main()
{
    int ul,ll;
    int d_count,a_no;
    printf("Enter upper limit and lower limit of range>>\n");
    scanf("%d%d",&ul,&ll);
    if(ul>ll)
    {
        for(int i = ll ; i<ul ; i++)
        {
            a_no=0;
            d_count=0;
            int copy =i;
            for(int j = i; j>0 ;j=j/10 )
            {
                d_count++;
                
            }

            for(int k = 1 ; k <= d_count ;k++ )
            {
                
                
                int c = copy % 10;
                a_no = a_no + pow(c, d_count);
                copy = copy / 10;
            }
        
            if(a_no == i)
            {
                printf("%d \t",i);
            }
        
        }
    }
    else{
        printf("You enter upper limit less than lower limit :((");
    }
    return 0;
}