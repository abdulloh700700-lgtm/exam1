/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main() {
  
  int son;
int sum = 0;

printf("Son kiriting : ");
scanf("%d", &son);

while (son != 0) {

    sum = sum + son;

    printf("Son kiriting : ");
    scanf("%d", &son);
}

printf("Sonlar yigindisi: %d\n", sum);


    
        
    
     
        
        
   
        
    return 0; }
