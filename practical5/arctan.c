#include <stdlib.h>
#include <stdio.h>
#include <math.h>

 //Function prototypes
 double archtanx1(const double x, const double delta);
 double archtanx2(const double x);

 int main() {
     double delta, x, tan1[1000], tan2[1000];
         printf("Enter value of delta: ");
             scanf("%lf", &delta);
                 x = -0.9;
                     int j;

                         for (j = 0; x <= 0.9 && j < 1000; j++) {
                                 // Calculate arctangent approximations
                                         tan1[j] = archtanx1(x, delta);
                                                 tan2[j] = archtanx2(x);

                                                         // Print the difference between the approximations for each x
                                                                 printf("The difference between functions archtanx1 and archtanx2 is %.10f for x=%f\n", fabs(tan1[j] - tan2[j]), x);

                                                                         x = x + 0.1;                                                                             }

                                                                                 return 0;

                                                                              }
                                                                                 // Approximation of arctangent using a power series
                                                                                 double archtanx1(const double x, const double delta) {
                                                                                     double sum = 0;
                                                                                         double current = x;
                                                                                             int i = 0;
                                                                                                 int exponent;

                                                                                                     // Calculate terms of the power series until convergence
                                                                                                         while (fabs(current) > delta) {
                                                                                                                 exponent = 2 * i + 1;
                                                                                                                         current = pow(x, exponent) / exponent;
                                                                                                                                 sum += current;
                                                                                                                                         i++;
                                                                                                                                             }

                                                                                                                                                 return sum;
                                                                                                                                                 }

                                                                                                                                                 // Approximation of arctangent using logarithmic functions
                                                                                                                                                 double archtanx2(const double x) {
                                                                                                                                                     return (log(1 + x) - log(1 - x)) / 2;
                                                                                                                                                     }


