#pragma once

#include "number_base_t.hpp"

#include <vector>

using namespace std;


template <int N>
class number_t : public number_base_t {

 public:
  number_t(int dato = 0, int base = 10): number_base_t(base) {
    to_base(dato);
  }


  void to_base(int dato) {
    vector<char> aux = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                        'A', 'B', 'C', 'D', 'E', 'F'};

    int base = get_base();

    if (dato < 0) {
      cout << "\nNEGATIVE EXCEPTION\n";
      return;
    }
    if (base <= 0) {
      cout << "\nWRONG BASE EXCEPTION\n";
      return;
    }

    int i = N-1;


    while (dato >= base) {
      vec_[i] = aux[dato%base];
      i--;
      if (i < 0) {
        cout << "\nOVERFLOW EXCEPTION\n";
        return;
      }
      dato = dato / base;
    }
    vec_[i] = aux[dato];
  }

  ostream& write(ostream& os) {
    os << "[ ";
    for (auto a : vec_)
      os << a << ", ";
    os << "] \n";
    return os;
  }

 protected:
   vector<char> vec_ = vector<char>(N);

};
