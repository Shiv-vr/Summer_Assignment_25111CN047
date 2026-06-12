#include<stdio.h>
int perfect_num_check(int a){
    int p_no= 0;
   
    for(int i = 1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            p_no = p_no+i;
        }
    }
    return p_no;
}

int main()
{
    int n ;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    if(n = perfect_num_check(n))
    {
        printf("Given number is Perfect.");
    }
    else{
        printf("Given number is not Perfect.");
    }
    return 0;
}