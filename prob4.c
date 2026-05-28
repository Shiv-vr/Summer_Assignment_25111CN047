#include <stdio.h>
int main(){
    int n;
    printf("enter a number>>\n");
    scanf("%d",&n);
    int count=0;
    int n_cp=n;
    while(n!=0)
    {
        count++;
        n = n/10;
    }
    printf("The number %d have %d digit",n_cp,count);
    return 0;
}