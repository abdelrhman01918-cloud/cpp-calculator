// day 3 of learning programming
#include <iostream>

int main()
{
        double num1 = 0.0;
        double num2 = 0.0;
        char operation = '+';

        std::cout << "Enter number 1: ";
        std::cin >> num1;
        std::cout << "choose the operation * , / , + , - :";
        std::cin >> operation;
        std::cout << "Enter number 2: ";
        std::cin >> num2;

        if (operation == '*')
        std::cout << "result is " << num1 * num2 << std::endl;
        else if (operation == '/')
        std::cout << "result is " << num1 / num2 << std::endl;
        else if (operation == '+')
        std::cout << "result is " << num1 + num2 << std::endl;
        else if (operation == '-')                                                                    std::cout << "result is " << num1 - num2 << std::endl;

        return 0;
}

