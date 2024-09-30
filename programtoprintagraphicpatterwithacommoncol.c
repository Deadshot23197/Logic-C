#include<stdio.h> 
 int main () 
   { 
    int i , j , n, k  ; 
    printf( " Program to print a program with common colunm \n\n") ; 
    printf( " Enter total no of iterations to be performed  : \n");
    scanf (" % d ",&n ) ; 
   
   
 //printing the numerical  value of the loop  
  for ( i= 1 ; i <= n ; i ++ ) 
  { 
     for (k = 1 ; k < n - i   ; k ++ )
{
    printf(" ") ; 
}
    for ( j = i ; j>=1; j -- ) 
    { 
      printf( " % d ", & j ) ; 
    } 
    for ( j = 2 ; j <= i ; j ++) 
    { 
        printf( " % d ", &j ) ; 
    }
  }  
  return  0 ; 

 }