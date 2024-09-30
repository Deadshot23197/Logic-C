#include<stdio.h> 
#include<stdlib.h> 
 int main () 
    { 
     system("cls") ; 
     printf("\n Following are all the odd numbers in the range 1 to 50 \n\n"); 
     for(int i=1 ;i<=50;i++)
     { 
      if (i%2!=0)
       {
       printf(" %d \n\n",i);
       } 
        else
            {
                printf("\n\n"); 
            }
     }
      printf("\n\n");
      return 0 ;
     }