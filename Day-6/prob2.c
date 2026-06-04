#include<stdio.h>
#include<math.h>
int main()
{
    int binary;
    int i = 0;
    printf("Enter binary number>>\n");
    scanf("%d",&binary);
    int copy = binary;
    int decimal = 0;
    while(copy!=0)
    {
        int rem = copy%10;
        decimal= decimal+rem*pow(2,i);
        copy = copy/10;
        i++;

    }
    printf("Decimal = %d",decimal);
    return 0;
}