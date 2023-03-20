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
        else {printf("%c", *p);}
    }
     return 0;
}