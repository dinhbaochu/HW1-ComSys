#include <stdio.h>

void swap  (int *a, int *b){ //simple swap function
   int temp= *a;
   *a = *b ;
   *b = temp;
}

void printArray (int array[], int size) { //a function to print array 
   int i;
   for (i=0; i<size; i++) {printf("%d ",array[i]);}
}
 
int main(void) { //main function 
   int a[ ] = { 19, 6, 4, 8, 10,100, 12, 89, 68, 45, 37 , 92};  //input an array, it can be modified to input an array from terminal
   int size = sizeof(a)/sizeof(a[0]); //size of the given array
   int i, counter;
   
   do { //do a while loop 

   counter=0; //reset counter
   i=0; 

   for (i; i< size-1 ; i++){  // iterate through the given array 
      if (a[i]>a[i+1]){
         swap(&a[i], &(a[i+1])); // if any 2 elements are currently in wrong order, swap it 
         counter  +=1; // count number of swap performed
      }
   }
   }
  while (counter != 0); // after any cycle that we did not need to swap any element (it means that all elements are in right order), we terminate the while loop
  printArray(a, size); //print the final array 
  return 0;
}
