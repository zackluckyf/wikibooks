//
//  main.cpp
//  exercise24
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

// Request the user to type numbers, or type 0 to stop. Show how many numbers
// were between 100 and 200 (both included).

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int userNum(1);
    int count(0);
    cout << "Enter numbers type 0 to stop" << endl;
    while (userNum != 0)
    {
        cout << "Enter a number: ";
        cin >> userNum;
        if (userNum != 0 && userNum >=100 && userNum <= 200)
        {
            count++;
        }
    }
    cout << "There were " << count << " numbers between 100 and 200 inclusive." << endl;
    
    return 0;
}
