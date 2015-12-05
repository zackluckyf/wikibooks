//
//  main.cpp
//  exercise1
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type an integer and writes "YOU WIN" if the 
 value is between 56 and 78 (both included). In the other case it writes "YOU LOSE".
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    int userNum;
    cout << "Enter an integer to possibly win! ";
    cin >> userNum;
    if (userNum >= 56 && userNum <= 78)
    {
        cout << "YOU WIN" << endl;
    }
    else
    {
        cout << "YOU LOSE" << endl;
    }
    return 0;
}
