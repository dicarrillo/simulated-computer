#include "logic_gates.h"
#include "adders.h"
#include "test_logic.h"
#include <stdio.h>

// Test NOT gate for all values of bit 'a'
void test_not_gate() {
    int bit_a;
    int result;

    for (int a = 0; a <= 1; ++a) {
        bit_a = a;
        result = not_gate(bit_a);
        printf("Result of NOT %d: %d\n", bit_a, result);
    }

    printf("\n");
}

// Test AND gate for all values of bits 'a' and 'b'
void test_and_gate() {
    int bit_a;
    int bit_b;
    int result;

    for (int a = 0; a <= 1; ++a) {
        bit_a = a;

        for (int b = 0; b <= 1; ++b) {
            bit_b = b;
            result = and_gate(bit_a, bit_b);
            printf("Result of %d AND %d: %d\n", bit_a, bit_b, result);
        }
    }

    printf("\n");
}

// Test OR gate for all values of bits 'a' and 'b'
void test_or_gate() {
    int bit_a;
    int bit_b;
    int result;

    for (int a = 0; a <= 1; ++a) {
        bit_a = a;

        for (int b = 0; b <= 1; ++b) {
            bit_b = b;
            result = or_gate(bit_a, bit_b);
            printf("Result of %d OR %d: %d\n", bit_a, bit_b, result);
        }
    }

    printf("\n");
}

// Test XOR gate for all values of bits 'a' and 'b'
void test_xor_gate() {
    int bit_a;
    int bit_b;
    int result;

    for (int a = 0; a <= 1; ++a) {
        bit_a = a;

        for (int b = 0; b <= 1; ++b) {
            bit_b = b;
            result = xor_gate(bit_a, bit_b);
            printf("Result of %d XOR %d: %d\n", bit_a, bit_b, result);
        }
    }

    printf("\n");
}

// Test half adder for all values of bits 'a' and 'b'
void test_half_adder() {
    int bit_a;
    int bit_b;
    int sum;
    int carry_out;

    for (int a = 0; a <= 1; ++a) {
        bit_a = a;

        for (int b = 0; b <= 1; ++b) {
            bit_b = b;
            half_adder(bit_a, bit_b, &sum, &carry_out);

            printf("Result of adding %d and %d...\n", bit_a, bit_b);
            printf("Sum: %d\nCarry Out: %d\n", sum, carry_out);
        }
    }

    printf("\n");
}

// Test full adder for all values of bits 'a' and 'b', and carry in bit
void test_full_adder() {
    int bit_a;
    int bit_b;
    int carry_in;
    int sum;
    int carry_out;

    for (int a = 0; a <= 1; ++a) {
        bit_a = a;

        for (int b = 0; b <= 1; ++b) {
            bit_b = b;

            for (int c = 0; c <= 1; ++c) {
                carry_in = c;
                full_adder(bit_a, bit_b, carry_in, &sum, &carry_out);

                printf("Result of adding %d, %d, and %d...\n", bit_a, bit_b, carry_in);
                printf("Sum: %d\nCarry Out: %d\n", sum, carry_out);
            }
        }
    }

    printf("\n");
}