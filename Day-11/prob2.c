#include<stdio.h>
int maximum(int a, int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int n1,n2;
    printf("Enter two number>>\n");
    scanf("%d %d",&n1,&n2);

    printf("%d is greater than in between %d and %d",maximum(n1,n2),n1,n2);
    return 0;
}