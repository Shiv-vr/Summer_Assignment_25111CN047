#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to fint factorial>>\n");
    scanf("%d",&n);
    int fact =1;
    for(int i = n;i>1; i--){
        fact = fact*i;
    }
    printf("Factorial of number %d is %d",n ,fact);
    return 0;
}