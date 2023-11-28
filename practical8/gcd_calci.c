#include <stdio.h>

int gcd_recursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd_recursive(b, a % b);
    }
}

int main() {
    int num1, num2;

     //Input two integers
         printf("Enter the first integer: ");
             scanf("%d", &num1);
                 printf("Enter the second integer: ");
                     scanf("%d", &num2);
    
                         // Calculate and print the GCD
                             int result = gcd_recursive(num1, num2);
                                 printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    
                                     return 0;
                                     }
    
