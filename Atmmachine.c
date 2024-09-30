#include<stdio.h> 
#include<stdlib.h> 
 int main ()  
 { 
 
    int choice = 0 , balance = 10000 ,tamount = 0 ; 
    system ("cls"); 
    printf("\n\n Atm withdrawl screen \n");
    do 
    { 
        printf("\n\n 1 : Withdraw | 2 : Exit ") ;
        printf("\n Enter your choice\n");
        scanf("%d", &choice);
        switch(choice) 
        {
         case 1 : 
         printf("\n Yur account balance : %d",balance);
         printf("\n withdrawl Amount :") ; 
         scanf("%d",&tamount); 
         if (tamount>balance) printf("\n Insufficent funds ! \n");
         else
         {
            balance = balance - tamount ; 
            printf("\n Sucess ... Collect your cash ! \n") ; 
            printf("\n updated balance:%d",balance);
         } break ;
         case 2 :
         printf("\n Thank you ... Visit again ! ");
          break; 
         default :
         printf("\n Invalid Input , Try again ! ") ; 
         break ; 
        }
    }
        while(choice !=2 ); 
        printf("\n\n");
        return 0 ;
         }
     
