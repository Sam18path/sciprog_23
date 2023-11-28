#include <stdio.h>
#include <math.h>

int main() {
    // Define variables
       int n = 12;
       double a = 0;
       double b = M_PI / 3;
                     double w = (b - a) / (double)n;
                         
                             // Initialize the sum with the values at the endpoints
                                 double sum = tan(a) + tan(b);
                                 int i;
    
                                     // Iterate through equidistant points and update the sum
                                         for (i = 1; i < n; i++) {
                                                 sum += 2 * tan(a + w * i);
                                                     }
    
                                                         // Finalize the approximation using the Trapezoidal Rule
                                                             sum = sum * w * 0.5;
    
                                                                 // Print the approximation result
                                                                     printf("The Approximation of f(x) = tan(x) from 0 to pi/3 is %.3f\n", sum);
    
                                                                         // Calculate the actual value using log(2)
                                                                             double actual_value = log(2.0);
    
                                                                                 // Print the actual value
                                                                                     printf("The actual value of f(x) = tan(x) from 0 to pi/3 is %.3f\n", actual_value);
    
                                                                                         return 0;
                                                                                         }
    
    

