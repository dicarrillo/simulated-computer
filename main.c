#include <stdio.h>

// Function prototypes
void test_not_gate();
void test_and_gate();
void test_or_gate();

// Simulates a NOT gate
int not_gate(int bit_a) {
    if (bit_a == 0) {
        return 1;
    }
    else {
        return 0;
    }
}

// Simulates an AND gate
int and_gate(int bit_a, int bit_b) {
    if ((bit_a == 1) && (bit_b == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

// Simulates an OR gate
int or_gate(int bit_a, int bit_b) {
    if ((bit_a == 1) || (bit_b == 1)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    test_not_gate();
    test_and_gate();
    test_or_gate();

    return 0;
}

// Tests NOT gate for all values of bit 'a'
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

// Tests AND gate for all values of bits 'a' and 'b'
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