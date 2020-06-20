#pragma once

#include "number_t.hpp"


class decimal_number_t: public number_t<4> {
 public:
   decimal_number_t(int dato): number_t(dato, 10) {};

 private:
};


class hex_number_t : public number_t<4> {
 public:
   hex_number_t(int dato): number_t(dato, 16) {};

 private: 

};
