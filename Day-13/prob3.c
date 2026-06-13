#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of cell in array>>\n");
    scanf("%d",&n);
    int ar[n];
    printf("Enter value in array");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j =0;j<i;j++)
        {
            if(ar[j]>ar[j+1]){
                int temp = ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }

    printf("Smallest value = %d\nLargest value = %d",ar[0],ar[n-1]);
    return 0;
}