//
// Created by Gustavo Rivero on 27-08-2020.
//

template <class Type>
Potencial<Type>::Potencial() : Summation<Type>() {};

template <class Type>
Type Potencial<Type>::calculate(int index, Type base) {
    if(index == 0)
        return 1;
    else
        return Summation<Type>::calculate(calculate(index - 1, base), base);
};