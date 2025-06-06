#include "logic_gates.h"

// Simulate a NOT gate
// Input: bit_a must be 0 or 1
// Output: NOT bit_a
int not_gate(int bit_a) {
    if (bit_a == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

// Simulate an AND gate
// Inputs: bit_a and bit_b must be 0 or 1
// Output: bit_a AND bit_b
int and_gate(int bit_a, int bit_b) {
    if ((bit_a == 1) && (bit_b == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

// Simulate an OR gate
// Inputs: bit_a and bit_b must be 0 or 1
// Output: bit_a OR bit_b
int or_gate(int bit_a, int bit_b) {
    if ((bit_a == 1) || (bit_b == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

// Simulate an XOR gate
// Inputs: bit_a and bit_b must be 0 or 1
// Output: bit_a XOR bit_b
int xor_gate(int bit_a, int bit_b) {
    int not_a;
    int not_b;
    int a_and_not_b;
    int not_a_and_b;

    not_a = not_gate(bit_a);
    not_b = not_gate(bit_b);

    a_and_not_b = and_gate(bit_a, not_b);
    not_a_and_b = and_gate(not_a, bit_b);

    return or_gate(a_and_not_b, not_a_and_b);
}