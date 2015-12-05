//
//  main.cpp
//  exercise10
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that is able to compute some operations on an integer. 
 The program writes the value of the integer and writes the following menu :
 
 1. Add 1
 2. Multiply by 2
 3. Subtract 4
 4. Quit
 
 The programs ask the user to type a value between 1 and 4. If the user types a value 
 from 1 to 3 the operation is computed, the integer is written and the menu is displayed again.
 If the user types 4, the program quits.
 
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[])
{
    int userNum;
    cout << "Enter an integer to perform operations on: ";
    cin >> userNum;
    int selection(0);
    while (selection != 4)
    {
        cout << "Enter an integer between 1 and 4: ";
        cin >> selection;
        if (selection == 1)
        {
            userNum += 1;
            cout << "Current integer size: " << userNum << endl;
        }
        else if (selection == 2)
        {
            userNum *= 2;
            cout << "Current integer size: " << userNum << endl;
        }
        else if (selection == 3)
        {
            userNum -= 4;
            cout << "Current integer size: " << userNum << endl;
        }
    }
    
    
    return 0;
}
