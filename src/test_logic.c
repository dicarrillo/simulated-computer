#include "logic_gates.h"
#include "adders.h"
#include "test_logic.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Test NOT gate for all values of bit 'a'
void test_not_gate() {
    int bit_a;
    int result;

    printf("Testing NOT gate...\n");

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

    printf("Testing AND gate...\n");

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

    printf("Testing OR gate...\n");

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

    printf("Testing XOR gate...\n");

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

    printf("Testing half-adder...\n");

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

    printf("Testing full-adder...\n");

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

// Randomize the values of eight bits
// Helper function for test_single_eight_bit_adder
// Input: 'byte' is a pointer to an int array storing eight bits
// Output: 'byte' is populated with random bit values
void randomize_byte(int* byte) {
    for (int i = 0; i < 8; ++i) {
        byte[i] = rand() % 2;
    }
}

// Test eight-bit adder for random values of bytes 'a' and 'b'
// Helper function for test_eight_bit_adder
void test_single_eight_bit_adder() {
    int sum_byte[8];
    int byte_a[8];
    int byte_b[8];

    randomize_byte(byte_a);
    randomize_byte(byte_b);

    eight_bit_adder(byte_a, byte_b, sum_byte);
    
    printf("  ");

    for (int i = 7; i >= 0; --i) {
        if (i == 0) {
            printf("%d\n", byte_a[i]);
        }
        else {
            printf("%d ", byte_a[i]);
        }
    }
    
    printf("+ ");

    for (int i = 7; i >= 0; --i) {
        if (i == 0) {
            printf("%d\n", byte_b[i]);
        }
        else {
            printf("%d ", byte_b[i]);
        }
    }
    
    printf("-----------------\n  ");

    for (int i = 7; i >= 0; --i) {
        if (i == 0) {
            printf("%d\n", sum_byte[i]);
        }
        else {
            printf("%d ", sum_byte[i]);
        }
    }

    printf("\n");
}

// Test eight bit adder for several randomly-generated addition operations
void test_eight_bit_adder() {
    printf("Testing eight-bit adder...\n");

    srand(time(NULL));

    for (int i = 0; i < 8; ++i) {
        test_single_eight_bit_adder();
    }
}