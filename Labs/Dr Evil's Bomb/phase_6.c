#include <stdio.h>

// 6 inputs: values stored starting at address 0x7fffffffd7e0
// int inputs[6] = {7,2,3,4,5,6}; // will blow because first input > 6
int inputs[6] = {1,2,3,4,5,6}; 

int* r12;
int* r14;
int r13;
int* rbp;
int* rbx;
int esi;

void phase_6_80(){
    rbp = r12;
    int eax = *r12;
    eax = eax - 1;

    if (eax > 5){ //ja, not jg, might trip up if negative
        printf("BOOM! (First input was greater than 6)");
    }

    if (r12 == r14){ // why comparing pointers? (not values)
        phase_6_105(); // jump to phase_6_105
    }
    rbx = r13;
    phase_6_61(); // jump to phase_6_61
}

void phase_6_105(){
    esi = 0;
    // mov    0x30(%rsp,%rsi,4),%ecx  
}

void phase_6_61(){

}

int main(){
    // Store address of first input in r12
    r12 = &inputs[0];
    // Store address of last input in r14
    r14 = &inputs[5];
    // Store constant 1 in r13
    r13 = 1;

    phase_6_80(); // jump to <phase_6+80>

    return 0;
}