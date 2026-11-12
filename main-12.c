/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

    int main() {
    int a, b, c;
    
        printf("1chi sonnni kiritng: ");
            scanf("%d", &a);
        
        printf("2chi sonnni kiritng: ");
            scanf("%d", &b);
            
        printf("3chi sonni kiritng: ");
            scanf("%d", &c);
            
            
        if (a >= b && a>= c) {
            printf("eng katta son: %d", a);
            
            
        }   
        
        
        else if (b >= a && b >= c) {
            printf("eng katta son %d", b);
        }
        
        
        
        else if (c>= a && c>= b) {
            printf("eng katta son %d", c);
            
        }
        
   
        
    return 0; }
