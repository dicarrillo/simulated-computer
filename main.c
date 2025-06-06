#include <stdio.h>

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

int main()
{
    int bit_a;
    int bit_b;
    int result;

    bit_a = 0;
    bit_b = 0;

    return 0;
}