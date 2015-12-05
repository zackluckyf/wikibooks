//
//  main.cpp
//  exercise21
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Request the user to type numbers, each time printing its triple, until the user enters -999.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int userNum;
    while (userNum != -999)
    {
        cout << "Enter a number to see its triple, enter -999 to end: ";
        cin >> userNum;
        if (userNum != -999)
        {
            cout << userNum << " tripled is " << userNum * 3 << endl;
        }
    }
    
    return 0;
}
