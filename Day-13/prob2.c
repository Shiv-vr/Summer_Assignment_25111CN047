#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of cell>>\n");
    scanf("%d",&n);
    int ar[n];
    printf("ENter valuse in cell of array>>\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int sum =0;
    for(int i =0 ;i<n;i++){
        sum= sum+ar[i];
    }

    float avg = sum/n;

    printf("Sum of array = %d\nAVG of array = %f",sum,avg);
    return 0;
}