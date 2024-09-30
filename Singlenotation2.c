#include <stdio.h> 
 int main () {
     
    int a , b , *Poin1 , *Poin2  , sum ; 
    printf("Enter the value of a and b:    ") ; 
    scanf (" % d  % d ", & a , & b ) ; 
 Poin1 = & a ; 
 Poin2 = & b ; 
  sum = *Poin1 + *Poin2 ; 
 /*  The whole operation can be defined as a traceback to taking the input
 for a & b and then using the pointers 1 & 2 to add them finally  and storing them in the "sum" variable 
 */ 
printf(" The sum of a & b is % d " , sum) ; 
 return 0 ; 
 // On running the program we find out that  the sum of  a & b is recorded as the sum of their adress values in which the variables were stored 
 }