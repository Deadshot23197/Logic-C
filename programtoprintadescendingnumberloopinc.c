#include <stdio.h> 
  int main () 
    { 

     printf("Program to print a descending number pattern "); 
      int  rows , col ; 

    for ( rows = 1 ; rows <= 5 ; rows ++  ) 
      { 
        for (col = 5 ; col>= rows  ; col--  ) 
         { 
            printf("%d", col) ; 
         }
          printf(" \n\n"); 
      }
      return 0   ; 
    }