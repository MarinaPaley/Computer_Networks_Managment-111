#include <iostream>
#include <string>
#include <exception>
#include "Complex.h"

/**
 * \brief Функция входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
    const auto z1 = Complex(1, 25);
    const auto z2 = Complex(z1);
    const Complex z3;
    const auto z4 = z1.GetConjugate();

    try
    {
        std::cout << typeid(z1).name() << " z1 = " << z1.GetAlgebraView() << "\n";
        std::cout << typeid(z2).name() << " z2 = " << z2.GetAlgebraView() << "\n";
        std::cout << typeid(z3).name() << " z3 = " << z3.GetAlgebraView() << "\n";
        std::cout << typeid(z4).name() << " z4 = " << z4.GetAlgebraView() << "\n";
        std::cout << std::endl;
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
