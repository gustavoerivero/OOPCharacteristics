//
// Created by Gustavo Rivero on 26-08-2020.
//

#ifndef OPERATIONS_SUM_H
#define OPERATIONS_SUM_H
#include <vector>

template <class Type>
class Sum {
public:
    Sum();
    Type calculate(Type a, Type b);
    Type calculate(std::vector<Type> numbers);
};

#include "Sum.cpp"
#endif //OPERATIONS_SUM_H
