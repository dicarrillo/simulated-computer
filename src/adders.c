#include "logic_gates.h"
#include "adders.h"

// Simulate a half adder
// Inputs: bit_a and bit_b must be 0 or 1
// Outputs: sum and carry_out are pointers to ints that store the sum and carry out values
void half_adder(int bit_a, int bit_b, int* sum, int* carry_out) {
    *sum = xor_gate(bit_a, bit_b);
    *carry_out = and_gate(bit_a, bit_b);
}

// Simulate a full adder
// Inputs: bit_a and bit_b must be 0 or 1
// Outputs: sum and carry_out are pointers to ints that store the sum and carry out values
void full_adder(int bit_a, int bit_b, int carry_in, int* sum, int* carry_out) {
    int a_xor_b;
    int a_xor_b_and_c;
    int a_and_b;

    a_xor_b = xor_gate(bit_a, bit_b);
    *sum = xor_gate(a_xor_b, carry_in);
    a_xor_b_and_c = and_gate(a_xor_b, carry_in);
    a_and_b = and_gate(bit_a, bit_b);
    *carry_out = or_gate(a_xor_b_and_c, a_and_b);
}