/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

    int main() {
     int day  ;
     
     printf("son kiritng: ");
     scanf("%d", &day);
     

     
        switch (day) {
            case 1:
            printf("dushanba");
        break;    
     
        case 2:
            printf("seshanba");
            break;
            
        case 3: 
            printf("chorshanba");
            break;
            
        case 4 :
            printf("payshanba");
            break;
            
        case 5:
            printf("juma");
            break;
            
        case 6 :
            printf("shanba");
            break;
            
        case 7 :
            printf("yakshanba");
            break;
            
    default :
        printf("bunday kun mavjud emas");
        
        }
            
        
    return 0; }
