#include <stdio.h>
int main()
{
int n,m;
printf("Enter 2 number>>\n");
scanf("%d%d",&n,&m);
for(int i = 1; i<=n;i++)
{
    for(int j = 1;j<=m;j++)
    {
        if(n*j==m*i)
        {
            printf("LCM =%d",m*i);
            return 0;
        }
    }


}

}