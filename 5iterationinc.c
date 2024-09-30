#include <stdio.h> 
  int main ()  
   
    { 
        int i , j,n ; 
       printf( " Program to print a same order alphabateical order graphic pattern \n\n") ; 
       printf(" Enter the value till the value you want those alphabets to be printed : \n\n"); 
         scanf(" %d",&n); 
         
     for (i= 1 ; i<=n ; i ++ ) 
       { 
        for (j = 1 ; j <= n  ; j ++ )  
        { 
         printf("%c ", i+64 ); 
        }
        printf("\n\n"); 
       }
       return 0 ; 
    }