//
//  main.cpp
//  exercise19
//
//  Created by Zack Fanning on 12/4/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type the value of N and display an output like the following:
 
 N=1
 *
 N=2
 **
  *
 N=3
 ***
  **
   *
 
 and so on
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int userNum;
    cout << "Enter an integer(n) to see a display based on the number: ";
    cin >> userNum;
    for (int i = 0; i < userNum; i++)
    {
        for (int j = 0; j < userNum; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else
            {
            cout << "*";
            }
        }
        cout << endl;
    }
    
    
    
    return 0;
}
