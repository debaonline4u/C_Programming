// This is example of Quick Sort - which is implemented and provided by C Library.

#include <stdio.h>
#include <stdlib.h>

int values[] = { 88, 56, 100, 79, -25 };

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main () {
   int n;

   printf("Before sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {
      printf("%d ", values[n]);
   }

   qsort(values, 5, sizeof(int), cmpfunc);   // along with array and size of array, it takes size of each element and a function to compare.

   printf("\nAfter sorting the list is: \n");
   for( n = 0 ; n < 5; n++ ) {   
      printf("%d ", values[n]);
   }
  
   return(0);
}
