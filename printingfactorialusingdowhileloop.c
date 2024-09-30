#include<stdio.h>
#include<stdlib.h>
int main () 
{ 
    int num , fact = 1; 
    printf("\n Enter your desired number :\n");
    scanf("%d",&num); 
    if(num!=0){
    do{
        fact = fact *( num) ; 
        num = num - 1 ;
    }while(num>0);
    }
    printf("The factorial of the number is %d",fact);
    printf("\n\n"); 
    return 0 ;

    }
