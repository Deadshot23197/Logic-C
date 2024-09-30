#include<stdio.h> 
#include<stdlib.h> 
 int main () {
 
    // Enter how long this hollow pattern must run 
    int totalrow ; 
      printf("Enter the amount of times the hollow triangle loop must run :   "); 
      scanf("%d",&totalrow); 
    // for no of times the loop has to be printed declare i 
    int rowno ; 
    // for no of star that are to be printed in the loop declare j 
    int colno ; 
    for( rowno= 1 ; rowno <= totalrow ; rowno ++) { 
     for ( colno = 1 ; colno<= rowno ; colno ++) 
        {
         if(rowno <= 1 || colno == totalrow || rowno ==colno ){
            printf("*"); 
        }
         else
          { 
            printf(" "); 
         }
        }
        return 0 ; 
    }
    }
    
 