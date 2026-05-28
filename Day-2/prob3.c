#include <stdio.h>
int main(){
    int n;
    printf("Enter a number>>\n");
    scanf("%d",&n);
    int product=1;
    while(n!=0)
    {
        int rem = n%10;
        product=product*rem;
        n=n/10;
    }
    printf("product of digit = %d",product);
    return 0;
}