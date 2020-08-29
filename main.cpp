/*
 * Caracteristicas de POO:
 * - Herencia.
 * - Abstraccion.
 * - Sobrecarga.
 * - Polimorfismo.
 * Adicional: Recursividad.
 * Created by Gustavo Rivero on 26-08-2020.
 */

// Se incluyen las librerias y archivos a utilizar.
#include <vector>
#include <iostream>
#include "Potencial.h"

// Se da inicio al programa.
int main() {

    // Se declara la variable de soporte para las diversas respuestas del usuario. (Uso de punteros)
    int answer, *p;
    p = new int;
    p = &answer;

    // Ciclo del Menu.
    do{

        // Ciclo de Menu (Si la respuesta del usuario esta fuera de las opciones dadas).
        do{

            std::cout << "\n¿Que desea hacer?\n"
                         "(0) Salir.\n"
                         "(1) Suma de dos digitos.\n"
                         "(2) Suma de mas de dos digitos.\n"
                         "(3) Sumatoria.\n"
                         "(4) Potenciacion.\n"
                         "Ingrese su respuesta: ";
            std::cin >> *p;

            // Si la respuesta es incorrecta.
            if(*p != 0 && *p != 1 && *p != 2 && *p != 3 && *p != 4)
                std::cout << "\nIngrese un valor admitible.\n\n";

            // Si la respuesta es incorrecta, se repite el ciclo.
        }while(*p != 0 && *p != 1 && *p != 2 && *p != 3 && *p != 4);

        // Si la respuesta es '0' sale del programa.
        if(*p == 0)
            return 0;

        // Punto de control dependiendo de la respuesta dada por el usuario.
        switch(*p){

            // Suma de dos digitos.
            case 1: {

                // Se instancia la clase Suma de tipo 'float'.
                Sum<float> Sum;

                // Se declaran las variables que seran sumadas y se inician en '0'.
                float a = 0, b = 0;

                // Se solicitan los valores a sumar.
                std::cout << "\nIngrese el valor para 'a': ";
                std::cin >> a;
                std::cout << "Ingrese el valor para 'b': ";
                std::cin >> b;

                // Se indica el resultado al usuario.
                std::cout << "\n\nLa operacion da '" << a << " + " << b << " = " << Sum.calculate(a, b) << "'\n\n";

                // Fin de la opcion.
                break;

            }

            // Suma de mas de dos numeros.
            case 2: {

                // Se instancia la clase de Suma de tipo 'float'.
                Sum<float> Sum;

                // Se declara la variable de soporte para las cantidades de numeros que se van a sumar y se inicia en '0'.
                int cant = 0;

                // Ciclo de verificacion: Se deben sumar mas de dos numeros.
                do{

                    // Se solicita al usuario la cantidad de numeros a sumar.
                    std::cout << "\n¿Cuantos numeros va a sumar?: ";
                    std::cin >> cant;

                    // Si la cantidad de numeros a sumar es menor a dos.
                    if(cant <= 2)
                        std::cout << "\nIngrese un valor mayor a dos.\n\n";

                    // Si la cantidad de numeros a sumar es menor a dos, se repite el ciclo.
                }while(cant <= 2);

                // Se instancia y se declara el vector de tipo 'float' con tamaño 'cant'.
                std::vector<float> numbers = std::vector<float>(cant);

                // Se solicita al usuario los numeros a sumar.
                for (int i = 0; i < cant; i++) {
                    float number = 0;
                    std::cout << "Ingrese valor n°[" << (i + 1) << "]: ";
                    std::cin >> number;
                    numbers.push_back(number);
                }

                // Se muestra al usuario el resultado de la operacion.
                std::cout << "\n\nLa suma de '" << cant << "' digitos da como resultado '" << Sum.calculate(numbers)
                          << "'\n\n";

                // Fin de la opcion.
                break;

            }

            // Sumatoria.
            case 3: {

                // Se instancia la clase de Sumatoria de tipo 'float'.
                Summation<float> Summation;

                // Se declara la variable de soporte que indicara la cantidad de iteraciones de la sumatoria y se inicia en '0'.
                int iteration = 0;

                // Ciclo de verificacion: La sumatoria debe tener mas de dos iteraciones.
                do{

                    // Se solicita al usuario la cantidad de iteraciones.
                    std::cout << "\n¿Cuantas iteraciones va a realizar la sumatoria?: ";
                    std::cin >> iteration;

                    // Si la cantidad de iteraciones es menor o igual a dos.
                    if(iteration <= 2)
                        std::cout << "Ingrese un valor mayor a dos.\n\n";

                    // Si la cantidad de iteraciones es menor o igual a dos se repite el ciclo.
                }while(iteration <= 2);

                // Se declara la variable de soporte que indicara el numero que se va a sumar.
                float number = 0;

                // Se solicita al usuario el numero que desea sumar.
                std::cout << "¿Que numero desea sumar?: ";
                std::cin >> number;

                // Se muestra al usuario el resultado de la operacion.
                std::cout   << "\n\nLa sumatoria de '"      << iteration
                            << "' iteraciones con valor '"  << number
                            << "' da como resultado '"      << Summation.calculate(iteration, number) << "'\n\n";

                // Fin de la opcion.
                break;

            }

            // Potenciacion.
            case 4: {

                // Se instancia la clase de Potenciacion de tipo 'float'.
                Potencial<float> Potencial;

                // Se declara la variable de soporte que indicara el indice de la potencia.
                int index = 0;

                // Se declara la variable de soporte que indicara la base de la potencia.
                float base = 0;

                // Se solicita al usuario la base de la potencia.
                std::cout << "\n\n¿A que numero desea sacar su potencia?: ";
                std::cin >> base;

                // Se solicita al usuario el indice de la potencia.
                std::cout << "¿Cual es el indice de la potencia?: ";
                std::cin >> index;

                // Se muestra al usuario el resultado de la operacion.
                std::cout   << "\nLa potencia de '"         << base
                            << "' con indice de '"          << index
                            << "' da como resultado '"      << Potencial.calculate(index, base) << "'\n\n";

                // Fin de la opcion.
                break;

            }

            // Fin del switch.
        }

        // Ciclo de verificacion: Que desea realizar el usuario
        do{

            // Se pregunta al usuario que desea realizar.
            std::cout << "\n¿Que desea hacer ahora?\n"
                         "(0) Salir.\n"
                         "(1) Realizar una nueva operacion.\n"
                         "Ingrese su respuesta: ";
            std::cin >> *p;

            // Si la respuesta no se encuentra en las opciones dadas.
            if(*p != 0 && *p != 1)
                std::cout << "\nIngrese un valor admitible.\n\n";

            // Si la respuesta no se encuentra en las opciones dadas se repite el ciclo.
        }while(*p != 0 && *p != 1);

        // Si el usuario desea continuar con las operaciones se repetira el ciclo.
    } while(*p != 0);

    // Fin del programa.
    return 0;

}
