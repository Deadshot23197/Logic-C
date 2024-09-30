#include<stdio.h>
#include<stdlib.h> 
 int main () 
   { 
    int i , j ; 
    system ("cls"); 
    printf("For loop \n\n"); 
    for ( i =1 ; i<=10 ; i++) 
    { 
        for (j = 1 ;j <= i ; j ++)
    { 
        printf("*"); 
        }
        printf("\n"); 
    } 
    for ( i = 1 ; i <= 10 ; i ++)
    { 
        for ( j = 1 ; j <= i  ; j ++)
        { 
            printf("*"); 

        }
        printf("\n"); 
    }
    printf("\n\n"); 
    return 0 ; 
   }