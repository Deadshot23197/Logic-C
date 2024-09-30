#include<stdio.h>
#include<stdlib.h> 

 int main () 
 { 
    system("cls") ; 

    int i , num ,count , sum = 0 ,  avg   ,  max = 0 ; 

    printf("For loop - Sum ,  avg   ,   max \n\n"); 
    printf("Enter count :"); 
    scanf("%d",&count); 
    for ( i = 0 ; i<count; i++) 
    {
        printf("\n Enter number %d : ", i+1); 
        scanf("%d",&num); 
        sum = sum + num ; 
        avg= sum/(i + 1) ; 
        if (max<num) max = num  ; 
        printf("sum = %d,avg= %d,max= %d\n",sum,avg,max); 

    }
    printf("\n\n"); 
    return 0 ; 

 }