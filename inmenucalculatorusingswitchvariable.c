#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
int main ()
{
    int a,b , result , remainder , choice ; 
    system("cls"); 
   printf("\nEnter a :\n") ;
   scanf("%d",&a); 
   printf("\nEnter b :\n");
   scanf("%d", &b);  
   printf("\nEnter Menu choice \n");
   printf("___________________\n"); 
   printf("1: add \n");
   printf("2:subtract\n"); 
   printf("3:Multiply\n"); 
   printf("4 : Divide \n"); 
   printf("5 : Exit \n"); 
   printf("Select:"); 
   scanf("%d",&choice); 
   switch (choice) 
   {
   case 1 :
   printf("\n a+b = %d \n", a+b); 
    break;
   case  2: 
   printf("\n a-b = %d\n", a - b); 
   break;
   case 3:
   printf("\n a*b = %d \n", a * b ); 
   break ; 
   case  4:
   printf("\n a/b = %d\n", a/b); 
   printf("a%%b= %d", remainder); 
   case 5 :
   printf("\n Thank you !\n"); 
    default: 
    printf("\n Invalid Selection !"); 
    break ; 
   }
   printf("\n\n"); 
        return 0 ; 
}

 