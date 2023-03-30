/*
Name: Chu Dinh Bao 
ID: V202100527 
Assignment #2
*/

#include <stdio.h>

struct USB { // part a, use struct to store the information about the USB
    char name[30];  
    int capacity;
    int serial;
    int used;
};

int main() {
    struct USB *an_usb; // part b, using pointer to access the struct

    int n;
    printf("Number of USBs: ");
    scanf("%d", &n); //input the number of USB from users keyboard

    // part c, memory allocation to allocate the memory for n USB
    struct USB* n_usb = malloc(n * sizeof(struct USB));

    // part d, check information 
    for (int i = 0; i < n; i++) {
        printf("USB # %d:\n", i);

        int count = 0;
        //check the capacity
        do {
            printf ("Capacity: %d\n", n_usb[i].capacity);
            if (n_usb[i].capacity<=0){ //if negative
            printf("Enter the new capacity: ");
            scanf("%d", &n_usb[i].capacity);
            count++;}
            else{break;}
        } while (count < 3);

        // check the serial number 
        count = 0; //reset count
        do {
            printf ("Serial number: %d\n", n_usb[i].serial);
            if (n_usb[i].serial<=0){ 
            printf("Enter the new serial number: ");
            scanf("%d", &n_usb[i].serial);
            count++;}
            else{break;}
        } while (count < 3);

        // check the number of used 
        count = 0;
        do {
            printf ("Number of used: %d\n", n_usb[i].used);
            if (n_usb[i].used<=0){
            printf("Enter the new number of used: ");
            scanf("%d", &n_usb[i].used);
            count++;}
            else{break;}
        } while (count < 3);
    }

    // part e, display all the information
    printf("====Information====\n");
    for (int i = 0; i < n; i++) {
        printf("USB #%d:\n", i);
        printf("Name: %s\n", n_usb[i].name);
        printf("Capacity: %d\n", n_usb[i].capacity);
        printf("Serial Number: %d\n", n_usb[i].serial);
        printf("Number of Used: %d\n", n_usb[i].used);
    }

    // part f, find and show the USB which have max number of uses
    // find
    int usb_max = 0;
    for (int i = 1; i < n; i++) {
        if (n_usb[i].used > n_usb[usb_max].used) {
            usb_max = i;
        }
    }
    //show
    printf("====USB has the Max Number of Used====\n");
    printf ("Usb #%d:\n", usb_max);
    printf("Name: %s\n", n_usb[usb_max].name);
    printf("Capacity: %d\n", n_usb[usb_max].capacity);
    printf("Serial Number: %d\n", n_usb[usb_max].serial);
    printf("Number of Used: %d\n", n_usb[usb_max].used);

    // part g, free the  memory
    free(n_usb);

    return 0;
}