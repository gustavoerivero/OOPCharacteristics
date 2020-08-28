//
// Created by Gustavo Rivero on 27-08-2020.
//

template <class Type>
Summation<Type>::Summation() : Sum<Type>() {};

template <class Type>
Type Summation<Type>::calculate(int iteration, Type number){
    if(iteration == 0)
        return 0;
    else
        return Sum<Type>::calculate(calculate(iteration - 1, number), number);
};
