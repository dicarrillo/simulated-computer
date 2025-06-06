#include <stdio.h>

// Test function prototypes
void test_not_gate();
void test_and_gate();
void test_or_gate();
void test_xor_gate();
void test_half_adder();

// Simulate a NOT gate
// Input: bit_a must be 0 or 1
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
int xor_gate(int bit_a, int bit_b) {
    int not_a;
    int not_b;
    int and_result_1;
    int and_result_2;

    not_a = not_gate(bit_a);
    not_b = not_gate(bit_b);

    and_result_1 = and_gate(bit_a, not_b);
    and_result_2 = and_gate(not_a, bit_b);

    return or_gate(and_result_1, and_result_2);
}

// Simulate a half adder
// Inputs: bit_a and bit_b must be 0 or 1
// Outputs: sum and carry are pointers to ints that store the sum and carry values
void half_adder(int bit_a, int bit_b, int* sum, int* carry_out) {
    *sum = xor_gate(bit_a, bit_b);
    *carry_out = and_gate(bit_a, bit_b);
}

int main() {
    // Test logic gate outputs
    test_not_gate();
    test_and_gate();
    test_or_gate();
    test_xor_gate();
    
    // Test half adder
    test_half_adder();

    return 0;
}

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