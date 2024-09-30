#include <stdio.h> 
#include<stdlib.h> 
     int sum ( int  a, int b ) ; 
 int diff ( int a ,int b  ) ; 
 int multiply  ( int a , int b ) ; 
typedef int (*function_pointer)(int);

 // takes two arguments for the function)_ pointer which returns a pointer to an integer 
  

 int  main ()  {   
 int choice  ; 
   int (*function_pointer[])(int , int ) = {sum, diff, multiply};
  
  printf(" Select the function that you want to use :"); 
  scanf(" %d "  , &choice); 

   int result = (function_pointer[choice], 4 , 3); 
    printf( " This is the output of your desired  result : %d " , result ) ; 

    }  
    int sum ( int  a, int b )  { 
      return a + b  ; 

   }
   int diff ( int a ,int b   ) { 
    return a - b ; 
   }
   int multiply ( int a  , int b  )  { 
       return  a *  b   ; 
   } 

