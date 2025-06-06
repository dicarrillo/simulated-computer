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

// Simulate an eight-bit adder
// Inputs: byte_a and byte_b are pointers to eight-bit addends, stored as int arrays
// Output: sum_byte is a pointer to int array that stores the sum of the add operation,
//         final_carry_out is a pointer to the final carry-out bit
void eight_bit_adder(int* byte_a, int* byte_b, int* sum_byte, int* final_carry_out) {
    int bit_a;
    int bit_b;
    int sum;
    int carry_out;
    int carry_in;

    bit_a = byte_a[0];
    bit_b = byte_b[0];

    half_adder(bit_a, bit_b, &sum, &carry_out);
    sum_byte[0] = sum;

    for (int i = 1; i < 8; ++i) {
        bit_a = byte_a[i];
        bit_b = byte_b[i];
        carry_in = carry_out;

        full_adder(bit_a, bit_b, carry_in, &sum, &carry_out);
        sum_byte[i] = sum;
    }

    *final_carry_out = carry_out;
}