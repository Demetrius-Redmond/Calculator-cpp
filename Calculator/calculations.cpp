#include <print>
#include <iostream>



// Get first number from user
//    getUserInput();
int getUserInput()
{
    int num{};
    std::print("Enter a number: ");
    std::cin >> num;
    return num;
}
    // Get mathematical operation from user
//    getMathematicalOperation();

void add(int x, int y)
{
    std::cout << "The answer is: " << x + y << '\n';
}

void subtract(int x, int y)
{
    std::cout << "The answer is: " << x - y << '\n';
}

void multiply(int x, int y)
{
    std::cout << "The answer is: " << x * y << '\n';
}

void divide(int x, int y)
{
    std::cout << "The answer is: " << x / y << '\n';
}


char getMathematicalOperation()
{
    std::print("Which operator would you like to use: ");
    char x{};
    std::cin >> x;
    return x;
}


void calculate()
{
    int x{ getUserInput() };
    char z{ getMathematicalOperation() };
    int y{ getUserInput() };

    switch(z)
    {
    case '+':
        add(x, y);
        break;

    case '-':
        subtract(x, y);
        break;

    case '*':
        multiply(x, y);
        break;

    case '/':
        divide(x, y);
        break;
    }
}