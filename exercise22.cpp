//
//  main.cpp
//  exercise22
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Request the user to type positive numbers until either a zero or a negative is typed, 
 and then show the user how many positives were typed in.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int userInput(1);
    int count(0);
    cout << "Type positive numbers, to end type 0 or a negative" << endl;
    while (userInput > 0)
    {
        cout << "Enter a number: ";
        cin >> userInput;
        if (userInput > 0)
        {
            count++;
        }
    }
    cout << count << " positive numbers were typed" << endl;
    
    return 0;
}
