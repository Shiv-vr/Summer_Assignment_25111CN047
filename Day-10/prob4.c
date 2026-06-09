#include<stdio.h>
int main()
{
   
    int st = 1; // number of stars
    int sp =  5 - 1; // number of spaces
        
    for(int i = 0; i < 5 ; i++){ 
            
            // 2nd for loop for printing spaces
            for(int j = 1; j <= sp; j++){ 
                printf(" ");
            }
            
            // 3rd for loop for printing stars
            for(int j = 1; j <= st; j++){ 
                printf("%c ",(64+j));
            }
            st+=2;
            sp--;
            printf("\n");
        }
    return 0;
}