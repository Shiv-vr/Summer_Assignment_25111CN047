#include <stdio.h>
int main(){
    int n;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    int sum=0;
    while(n!=0)
    {
        int rem = n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum = %d",sum);
    return 0;
}