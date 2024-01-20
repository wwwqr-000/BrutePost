#include <iostream>
#include <fstream>
#include <vector>
#include <thread>

bool canBeInt(auto idk) {
    try {
        int ja = std::stoi(idk);
        return true;
    }
    catch (std::exception) {
        return false;
    }
}

int main() {
    std::cout << "Enter the target url.\n> ";
    std::string target;
    std::cin >> target;
    system("cls");
    std::cout << "Enter amount of $_POST index values.\n> ";
    std::string amountStr;
    std::cin >> amountStr;
    system("cls");
    if (!canBeInt(amountStr)) {
        std::cout << "Invalid number type. Please try again by pressing enter.\n";
        system("set /p end=");
        system("cls");
        main();
    }
    int postValCount = std::stoi(amountStr);
    std::string $_POSTNameArr[postValCount];
    system("cls");
    for (int i = 0; i < (sizeof($_POSTNameArr) / sizeof(std::string)); i++) {
        std::cout << "Enter the name of $_POST value " << i + 1 << ".\n> ";
        std::string tmpPostVal;
        std::cin >> tmpPostVal;
        $_POSTNameArr[0] = tmpPostVal;
        system("cls");
    }
    return 0;
}
