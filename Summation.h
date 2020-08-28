//
// Created by Gustavo Rivero on 27-08-2020.
//

#ifndef OPERATIONS_SUMMATION_H
#define OPERATIONS_SUMMATION_H
#include "Sum.h"

template <class Type>
class Summation : public Sum<Type> {
public:
    Summation();
    Type calculate(int iteration, Type number);
};

#include "Summation.cpp"
#endif //OPERATIONS_SUMMATION_H
