#include<stdio.h> 
#include<stdlib.h> 
 int main () 
  { 
  system("cls"); 
  printf("Printing table for any given nunber using for loop \n\n") ; 
  int i , count, num ; 
  printf("Enter your desired number \n\n") ; 
  scanf("%d",&num); 
  for ( i = 1 ; i<=10  ; i ++)
  { 
     printf("%d * %d = %d \n\n", num,i, (num * i  )); 
  }
 printf("\n\n"); 
  return 0 ; 
  }