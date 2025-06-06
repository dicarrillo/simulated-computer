#include <stdio.h>

// Simulates a NOT gate
int not_gate(int bit_a) {
    return bit_a ^ 1;
}

// Simulates an AND gate
int and_gate(int bit_a, int bit_b) {
    return bit_a & bit_b; 
}

// Simulates an OR gate
int or_gate(int bit_a, int bit_b) {
    return bit_a | bit_b;
}

int main()
{
    int bit_a;
    int bit_b;
    int result;

    bit_a = 0;
    bit_b = 0;
    result = or_gate(bit_a, bit_b);

    printf("Result: %d\n", result);

    return 0;
}