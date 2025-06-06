#ifndef ADDERS_H
#define ADDERS_H

void half_adder(int bit_a, int bit_b, int* sum, int* carry_out);
void full_adder(int bit_a, int bit_b, int carry_in, int* sum, int* carry_out);
void eight_bit_adder(int* byte_a, int* byte_b, int* sum_byte, int* final_carry_out);

#endif