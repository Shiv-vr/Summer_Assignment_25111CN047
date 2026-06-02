#include <stdio.h>
#include <math.h>

int main() {
    printf("Enter a number>>\n");
    int n;
    scanf("%d", &n);

    int copy =n;
    int a_no = 0;
    int d_count =0;
    for(int i = n; i>0 ;i=i/10 )
    {
        d_count++;
    }
    
    for(int j = 0 ; j <= d_count ;j++ )
    {
        int c = copy % 10;
        a_no = a_no + pow(c, d_count);
        copy = copy / 10;
    }
    
    if(a_no == n)
    {
        printf("It is armstrong number");
    }
    else {
        printf("No! it is not an armstrong number");
    }
    return 0;
}