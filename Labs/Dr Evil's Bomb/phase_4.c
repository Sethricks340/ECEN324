#include <stdio.h>


int dress = 14; // rdx
int silk = 0; // rsi
int diane = 4; // First number input //rdi


int func4(int dress, int silk, int diane){
    int rax = 0;
    int ebx = 0; // ?

    do{
        // push rbx on stack (don't understand why)
        // push %rbx
        rax = dress;
        rax = rax - silk;
        ebx = (ebx > 0) ? 1 : 0; // Extract ebx sign bit
        ebx = rax >> 1;
        ebx = ebx + silk;

        if (ebx > diane){
            dress = ebx - 1;
        }
        if (ebx < diane){
            silk = ebx + 1;
        }

    } while(ebx != diane);
}


// Create an integer variable that will store the number we get from the user
int myNum;

// Ask the user to type a number
printf("Type a number: \n");

// Get and save the number the user types
scanf("%d", &myNum);

// Output the number the user typed
printf("Your number is: %d", myNum);