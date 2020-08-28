/*
 * Created by Gustavo Rivero on 26-08-2020.
 */

template <class Type>
Sum<Type>::Sum(){};

template <class Type>
Type Sum<Type>::calculate(Type a, Type b){
    return (a + b);
};

template <class Type>
Type Sum<Type>::calculate(std::vector<Type> numbers){
    Type number = 0;
    for(int i = 0; i < numbers.size(); i++)
        number += numbers[i];
    return number;
};
