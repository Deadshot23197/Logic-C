#include<stdio.h> 
int main ()  
 { 
    int a = 5  , b , *oa , * oaa, *oaaa ; 
   // say 
    *oa = a ; 
    // and 
    *oaa = *oa ; 
    /* Then what this helps us do is first store
    the adress of a in * oa & then store the adress of *oa in *oaa */
      *oaa = *oaaa ; 
      Output1 : 
      printf("The adress of the variable a is stored in %d ", *oa ) ; 
      Output2: 
      printf("The adress value of the var containing the adress of the a var is now store in %d  ",*oa ); 
      Output3: 
      printf("The adress value stored in the pointer*oa is now stored in %d ", *oaa) ; 
      goto Output1; 
      return 0 ; 
 } 