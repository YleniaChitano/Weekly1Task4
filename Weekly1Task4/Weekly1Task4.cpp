#include <iostream>

int drink;

int main()
{
    std::cout << "What's your favorite drink?\n";
    std::cout << "Please select a number: \n\n1: coffee \n2 tea \n3 Coca Cola.\n\n";

    std::cin >> drink;

    if (drink == 1) {
        std::cout << "\nCoffee is delicious!\n";
    }

    if (drink == 2) {
        std::cout << "\nTea gives peace of mind.\n";
    }

    if (drink == 3) {
        std::cout << "\nCoke will give you a white smile.\n";
    }

    return 0;
}

