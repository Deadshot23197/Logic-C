#include<stdio.h> 
#include<stdlib.h>
int main () 
{ 
    system("cls") ; 
    
    char ci ; 
    printf("ASCII VAlUES USING FOR LOOP :\n\n");
    printf("Enter char:");
    scanf("%d",&ci); 


    for ( ci; ci<='z'; ci++)
    {
        printf("%c=%d\n",ci,ci) ; 

    }
    printf("\n\n"); 

    return 0 ; 

     
}

 