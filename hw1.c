/*
Name: Chu Dinh Bao 
Student ID: V202100527 
Assignment #1
File name: Ex1.c 
*/

#include <stdio.h> 

int main (void){
   
    char mystring[100];
    fgets (mystring, sizeof(mystring), stdin); //get an input string 
    int i, ascii;

    for (i=0; mystring[i] ; i++ ){
  
          ascii= mystring[i]; //find ascii code for character 

        if (ascii >=32 && ascii<=47){ //ascii code in that range, mean that the given charater is a special one (from space to /)

            ascii=mystring[i+1]; //check the following character, 
            if (ascii>=32 && ascii<=47){continue;} // if the following one is special, we did not print the current character 
            else {printf (" ");} //else, we print space, replace for the special character
        }
    
        else if (ascii <=90 && ascii >=65){ //ascii code in that range, mean the given character is in upper case
            ascii+=32; // convert to the lowwer case 
            mystring[i]=ascii ;
            printf("%c",mystring[i]);
        }
        else {printf("%c", mystring[i]);} //in the rest cases, we just print it
    }
return 0;

}

/*
Name: Chu Dinh Bao 
Student ID: V202100527 
Assignment #2
File name: Ex2.c 
*/

#include <stdio.h>

int main(void){

    char mystring[100];
    fgets(mystring, sizeof(mystring), stdin); //get an input string
    int ascii; //it will be converted to the ascii code of characters 
    char *p;

    for (p = mystring; *p; p++) {

        ascii = *p; //convert to the ascii code  
        if (ascii <= 122 && ascii >= 97) { //ascii code in that range, mean that the letter is in lowwer case
            ascii -= 32; //change to upper case 
            *p = ascii;
            printf("%c", *p);
        }
        else {printf("%c", *p);} //else, the character not in lowwer
    }
     return 0;
}


/*
Name: Chu Dinh Bao 
Student ID: V202100527 
Assignment #3
File name: Ex3.c 
*/

#include <stdio.h>

void swap  (int *a, int *b){ //swap function using pointer
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
