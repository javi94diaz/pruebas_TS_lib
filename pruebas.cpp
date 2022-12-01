// pruebas.cpp

#include "pruebas.h"

bool compare(int num1, int num2)
{
    if(num1 >= num2)
    {
        return true;
    }
    else return false;
}


int da_int()
{
    return 50;
}


int main()
{
    int number1 = 0;
    int number2 = 20;

    std::cout << "Hi!\n";

    std::cout << "Probando doble igualacion:\n";

    std::cout << "igualacion: " << (number1 = number2) << "\n";

    float x = (number1 = number2);
    float y = number1 = number2;

    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
    std::cout << "number1 " << number1 << "\n";
    std::cout << "number2 " << number2 << "\n";
   
    return 0;
}