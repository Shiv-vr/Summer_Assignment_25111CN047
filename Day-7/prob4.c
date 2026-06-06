#include<stdio.h>
int reverse_num(int a ,int rev)
{
    if(a==0)
    {
        return rev;
    }
    else{
        return reverse_num(a/10,rev*10+a%10);
    }
}
int main()
{
    int n;
    printf("ENter a number >>\n ");
    scanf("%d",&n);
    printf("Reverse of %d = %d",n ,reverse_num(n,0));
    return 0;
}