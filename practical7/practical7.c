#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// Function declarations
 int factorial(int n);
 double* allocateArray(int size);
 void fillWithOnes(double* array, int size);
 void freeArray(double* array);
 void printArray(double* array,int size);
 int main() {
     int size,order;
     printf("Enter the order of Polynomial: ");
     scanf("%d",&size);
         for (order = 1; order <= size; order++) {
                 double* arr = allocateArray(order+1);
                         fillWithOnes(arr, order + 1);
                                 double estimate = 1.0;
                                         double x = 1;
                                                 int i;
                                                         for (i = 1; i <= order; i++) {
                                                                     arr[i] = arr[i] / factorial(i);
                                                                                 x += arr[i];
                                                                                         }
                                                                                         printf("The value of approximated e is %f. The difference between approximated and the actual value of e is %e",x,x-exp(1.0));
                                                                                         printf("\n"); 
                                                                                        freeArray(arr);
                                                                                             }

                                                                                                 return 0;
                                                                                                 }

                                                                                                 int factorial(int n) {
                                                                                                     if (n == 0) {
                                                                                                             return 1;
                                                                                                                 } else {
                                                                                                                         return (n * factorial(n - 1));
                                                                                                                             }
                                                                                                                             }

                                                                                                                             double* allocateArray(int size) {
                                                                                                                                 return (double*)malloc(size * sizeof(double));
                                                                                                                                 }

                                                                                                                                 void fillWithOnes(double* array, int size) {
                                                                                                                                 int i;
                                                                                                                                     for (i = 0; i < size; i++) {
                                                                                                                                             array[i] = 1.0;
                                                                                                                                                 }
                                                                                                                                                 }


                                                                                                                                                 // Function to free allocated memory
                                                                                                                                                 void freeArray(double* array) {
                                                                                                                                                     free(array);
                                                                                                                                                     }

                                                                                                                                                     
