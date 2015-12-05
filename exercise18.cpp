//
//  main.cpp
//  exercise18
//
//  Created by Zack Fanning on 12/4/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type the value of N and writes this picture :
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

int main(int argc, const char * argv[]) {
    int userNum;
    cout << "Enter an integer(n) to see a display of that n: ";
    cin >> userNum;
    cout << "N=" << userNum << endl;
    for (int i = userNum; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
