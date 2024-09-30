#include<stdio.h> 
int main () { 
    int t = 344; 
    int *pincode ; 
    pincode = & t ; 
    *pincode = 655; 
    printf("The changed value of T is %d ", *pincode ) ; 
    return 0 ; 
}