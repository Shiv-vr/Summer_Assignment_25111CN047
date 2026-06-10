#include<stdio.h>
int main()
{
   
    int s = 1; 
    int space =  10 - 1; 
        
    for(int i = 0; i < 10 ; i++){ 
            
            
            for(int j = 1; j <= space; j++){ 
                printf(" ");
            }
            
            
            for(int j = 1; j <= s; j++){ 
                printf("%c ",(64+j));
            }
            s+=2;
            space--;
            printf("\n");
        }
    return 0;
}
