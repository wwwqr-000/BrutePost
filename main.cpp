#include <iostream>
#include <fstream>
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

//bool okFilePaths(std::string paths[])

int main() {
    system("title BrutePost");
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
    std::string $_POSTNameArr[postValCount][2];
    std::string blackListedOutPut = "";
    system("cls");
    for (int i = 0; i < postValCount; i++) {
        std::cout << "Enter the name of $_POST value " << i + 1 << ".\n> ";
        std::string tmpPostVal;
        std::cin >> tmpPostVal;
        $_POSTNameArr[i][0] = tmpPostVal;
        system("cls");
        std::cout << "Enter a valid path to a text file to bruteforce $_POST[\"" << tmpPostVal << "\"].\n> ";
        std::string tmpPathFile;
        std::cin >> tmpPathFile;
        $_POSTNameArr[i][1] = tmpPathFile;
        system("cls");
    }
    //std::string *p[postValCount] = &$_POSTNameArr;
    std::cout << "Now type a string that is included in the error response. So we can filter for it.\n> ";
    std::cin.ignore();
    std::getline(std::cin, blackListedOutPut);
    system("cls");
    return 0;
}
