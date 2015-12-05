//
//  main.cpp
//  exercise9
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
    Write a program that asks the user to type an integer between 0 and 20 (both included) and writes N+17.
    If someone types a wrong value, the program writes ERROR and he must type another value.
*/


#include <iostream>

int main(int argc, const char * argv[]) {
    int userNum;
    std::cout << "Enter an integer between 0 and 20 inclusive: ";
    std::cin >> userNum;
    while (userNum < 0 || userNum > 20)
    {
        std::cout << "ERROR. Please enter a value between 0 and 20: ";
        std::cin >> userNum;
    }
    std::cout << "Your number + 17 = " << userNum + 17 << std::endl;
    return 0;
}
