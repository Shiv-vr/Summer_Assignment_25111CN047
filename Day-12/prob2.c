#include<stdio.h>
#include <math.h>

int armstrong_check(int a){
    int copy =a;
    int a_no = 0;
    int d_count =0;
    for(int i = a; i>0 ;i=i/10 )
    {
        d_count++;
    }
    
    for(int j = 0 ; j <= d_count ;j++ )
    {
        int c = copy % 10;
        a_no = a_no + pow(c, d_count);
        copy = copy / 10;
    }
    
    return a_no;
}
int main()
{
    int n;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    if(n = armstrong_check(n))
    {
        printf("GIVEN NUMBER IS ARMSTRONG");
    }
    else
    {
        printf("Given number is not armstrong");
    }
    return 0;
}