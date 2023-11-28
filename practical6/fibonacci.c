#include<stdio.h>
#include<stdlib.h>

// Function to calculate the next Fibonacci number
 void fib(int *fn_1, int *fn_2);

 int main() {
     int n;
         printf("Enter the value of n: ");
             scanf("%d", &n);

                 int f0, f1, next, i;
                     f1 = 1;
                         f0 = 0;

                             // Print Fibonacci sequence for n=1
                                 if (n == 1) {                                         printf("The Fibonacci sequence for n=%d is %d", n);
                                                 printf("\n");
                                                     }
                                                         // Print Fibonacci sequence for n=2
                                                             else if (n == 2) {
                                                                     printf("The Fibonacci sequence for n=%d is %d", n, 1);
                                                                             printf("\n");
                                                                                 } else {
                                                                                         printf("The Fibonacci sequence is %d ", f1, 1);

                                                                                                 // Loop to calculate and print Fibonacci sequence up to n
                                                                                                         for (i = 1; i <= n - 1; i++) {
                                                                                                                     fib(&f0, &f1);
                                                                                                                                 printf("%d", f1);
                                                                                                                                             printf(" ");
                                                                                                                                                     }
                                                                                                                                                         }
                                                                                                                                                             printf("\n");
                                                                                                                                                                 return 0;
                                                                                                                                                                  } 

                                                                                                                                                                // Function to calculate the next fibonaci number                                                                                                                                                                 
                                                                                                                                                                void fib(int *a, int *b) { int next;
                                                                                                                                                                         next = *a + *b;
                                                                                                                                                                             *a = *b;
                                                                                                                                                                                 *b = next;
                                                                                                                                                                                 }
                                                                                                                                                                                 
