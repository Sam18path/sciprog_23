#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square_stub.h"  // Assuming you have a header file for magic_square functions

int getlines(char filename[MAX_FILE_NAME]);

int main() {  
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name: ");
    scanf("%s", filename);
    
    int n = getlines(filename);

    // Open the file 
     f = fopen(filename, "r");
             if (f == NULL) {
                     fprintf(stderr, "Error opening file.\n");
                             return 1;
                                 }
                                 int i;
                                     // Allocating a matrix for storing the magic square
                                         int **magicSquare = (int **)malloc(n * sizeof(int *));
                                             for (i = 0; i < n; i++) {
                                                     magicSquare[i] = (int *)malloc(n * sizeof(int));
                                                         }
                                                         int j;
                                                             // Inputting integer data into the matrix
                                                                 for (i = 0; i < n; i++) {
                                                                         for (j = 0; j < n; j++) {
                                                                                     if (fscanf(f, "%d", &magicSquare[i][j]) != 1) {
                                                                                                     fprintf(stderr, "Error reading from file.\n");
                                                                                                                     // Additional error handling if needed
                                                                                                                                     return 1;
                                                                                                                                                 }
                                                                                                                                                        }
                                                                                                                                                             }
                                                                                                                                                             printf("This square %s magic. \n",isMagicSquare(magicSquare,n)?"is":"is not");
    
                                                                                                                                                                // Freeing each row separately before freeing the array of pointers
                                                                                                                                                                     for (i = 0; i < n; i++) {
                                                                                                                                                                             free(magicSquare[i]);
                                                                                                                                                                                 }
                                                                                                                                                                                     free(magicSquare);
    
                                                                                                                                                                                         // Close the file
                                                                                                                                                                                            fclose(f);
    
                                                                                                                                                                                                 return 0;
                                                                                                                                                                                                }
    
                                                                                                                                                                                                 // Rest of the code remains unchanged
    
                                                                                                                                                                                                 //##!
    
                                                                                                                                                                                                 int getlines(char filename[MAX_FILE_NAME]) {
                                                                                                                                                                                                    FILE *fp;
                                                                                                                                                                                                         fp = fopen(filename, "r");
                                                                                                                                                                                                             
                                                                                                                                                                                                                 int ch_read;
                                                                                                                                                                                                                     int count = 0;
    
                                                                                                                                                                                                                         while( (ch_read = fgetc(fp)) != EOF)
                                                                                                                                                                                                                             {
                                                                                                                                                                                                                                     if (ch_read == '\n'){
                                                                                                                                                                                                                                                 count++;
                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                             }
    
                                                                                                                                                                                                                                                                 printf("No. lines, %d\n", count);
                                                                                                                                                                                                                                                                     fclose(fp); 
                                                                                                                                                                                                                                                                         return count;
                                                                                                                                                                                                                                                                         }
    
