#include <iostream>

int addition(int a, int b)
{
    return a + b;
}

int subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int division(int a, int b)
{
    return a / b;
}



int main()
{
    int num1, num2, operation;
    std::cout << "Enter a number: ";
    std::cin >> num1;
    std::cout << "Enter another number: ";
    std::cin >> num2;


    while(true){

        std::cout << "What would you like to do with these numbers?" << std::endl;
        std::cout << "1. Addition" << std::endl;            
        std::cout << "2. Subtraction" << std::endl;
        std::cout << "3. Multiplication" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter the number of the operation you would like to perform: ";
        std::cin >> operation;

        
        
        if (operation == 1)
        {
            std::cout << "Addition: " << addition(num1, num2) << std::endl;
        }
        else if (operation == 2)
        {
            std::cout << "Subtraction: " << subtraction(num1, num2) << std::endl;
        }
        else if (operation == 3)
        {
            std::cout << "Multiplication: " << multiplication(num1, num2) << std::endl;
        }
        else if (operation == 4)
        {
            std::cout << "Division: " << division(num1, num2) << std::endl;
        }
        else if (operation == 5)
        {
            break;
        }
        else
        {
            std::cout << "Invalid input" << std::endl;
        }
    }

    return 0;
}