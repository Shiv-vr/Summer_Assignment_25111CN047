#include<stdio.h>
int main(){
int n,m;
printf("Enter 2 number>>\n");
scanf("%d%d",&n,&m);
if(n>m)
{
    for(int i = n;i>=1;i--)
    {
        if(n%i==0 && m%i == 0)
        {
            printf("GCD of given number is %d",i);
            break;
        }
    }
}
else
{
    for(int i = m;i>=1;i--)
    {
        if(n%i==0 && m%i == 0)
        {
            printf("GCD of given number is %d",i);
            break;
        }
    }
}
return 0;
}