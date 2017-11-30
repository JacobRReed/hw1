#include <stdio.h>
#include <math.h>
#include "convert.h"

int convert_2s_complement_to_decimal(char* data, int bits) {
  int total = 0;
  int i;
  int power = pow(2, bits - 1);
  
  for(i = 0; i < bits; ++i) {
    if(i == 0 && data[i] != '0') {
      total = power * -1;
    } else {
      total += (data[i] - '0') * power;
    }
    power /= 2;
  }
  return total;
}

