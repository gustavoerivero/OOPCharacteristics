//
// Created by Gustavo Rivero on 27-08-2020.
//

#ifndef OPERATIONS_POTENCIAL_H
#define OPERATIONS_POTENCIAL_H
#include "Summation.h"

template <class Type>
class Potencial : public Summation<Type>{
public:
    Potencial();
    Type calculate(int index, Type base);
};

#include "Potencial.cpp"
#endif //OPERATIONS_POTENCIAL_H
