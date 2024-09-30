#include<stdio.h>
#include<stdlib.h>
#define operation 4 

 /*  int    add  ( int a , int b )  { 
     return a  + b  ;  }   
  int   difference  ( int  a , int b )  { 
      return a - b  ;  }   
   int multiply  ( int  a , int  b  )  { 
      return  a *  b     ; 
   }
    int divide  ( int  a  , int b )  { 
         return  a % b  ; 
    }
   */ int add ( int a  , int b )  { 
     return a + b  ; 
   } 
    int   check_divisibiityby2 (int number)   { 
 
  // We are essentially going to map this function into the definiton of another function  
        return (number % 2 == 0) ? 1 : 0;
    } 
    int function_test ( int  *func ( int  , int )   ){ 
       //  function to check divisibility  
         if ( check_divisibiityby2  ( func))  { 
           
               return 1 ; 
         }
          else { 
            
              return 0 ; 
          }
        
    }
 // returns a integer to pointer  of the add funciton  
    int main () {
    int a = 4   ; 
     int b  =  5  ; 
     // calls the  function add and passes it to *func 
       int result=   function_test (  (int (*)(int, int))add ( 3 , 4 )  )  ; 
        printf( " The number returned by  function add is   : % d " , result )  ; 
       // Corrected declaration of pointer_2array
 //int (*pointer_2array[operation])(int, int) = {add, difference, multiply, divide};   
       } 
     //  printf( " THe result of the function you selected  is : %d " ,  pointer_2array[choice](5,4)); 
       

        // Program to check 
 
    // Declare a function pointer that takes two integers and returns an integer
    //int (*ptr)(int, int);

    // Assign the address of the add function to the function pointer
   // ptr = &add; // Use & operator to get the address of the function

    // Call the add function using the function pointer
    // printf( " The result of the add function is  : %d " , ptr ( 3, 4 ) ) ; 

    

  