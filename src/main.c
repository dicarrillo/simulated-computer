#include "test_logic.h"
#include <stdio.h>

int main() {
    // Test logic gate outputs
    test_not_gate();
    test_and_gate();
    test_or_gate();
    test_xor_gate();
    
    // Test adder outputs
    test_half_adder();
    test_full_adder();

    return 0;
}