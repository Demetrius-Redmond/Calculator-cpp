#include <print>
#include <iostream>



// Get first number from user
//    getUserInput();
int getUserInput()
{
    int x{};
    std::print("Enter a number: ");
    std::cin >> x;
    return x;
}
    // Get mathematical operation from user
//    getMathematicalOperation();
char getMathematicalOperation()
{
    std::print("Which operator would you like to use: ");
    char x{};
    std::cin >> x;
    return x;
}
    // Get second number from user
//    getUserInput();

    // Calculate result
//    calculateResult();

    // Print result
//    printResult();