#include "number_t.hpp"
#include "decimal_number_t.hpp"

#include <iostream>

using namespace std;


int main(void) {

  number_t<20> myNumber(2532, 8);
  myNumber.write(cout);

  hex_number_t myHex(2532);
  myHex.write(cout);

  return 0;
}
