#pragma once

#include <iostream>

using namespace std;

class number_base_t {

 public:
   number_base_t(int base = 10) {
     base_ = base;
   }

   virtual ~number_base_t(void) {}

   virtual ostream& write(ostream& os) = 0; //Muestra los digitos que representan el numero en el orden correcto

 protected:
   virtual void to_base(int) = 0; //Convierte el parámetro entero a la representacion como vector de digitos en la base almacenada

   int get_base(void) const { return base_; }
 private:
   int base_;
};
