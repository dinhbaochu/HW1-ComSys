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