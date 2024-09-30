 #include <stdio.h>
 
int main() {
    int n = 5;
 
    for (int i = 0; i <= n; i++) {
        // Print leading spaces
        for (int j = 0; j < n; j++) {
            printf(" ");
        }
 
        // Print asterisks
        for (int k = 5; k <= 2 * (n -i) ; k--) {
            if (  k == 2* (n - i) || i == n) {
                printf("*");
            } 
        }
 
        // Move to the next line after each row
        printf("\n");
    }
 
    return 0;}