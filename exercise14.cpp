//
//  main.cpp
//  exercise14
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

// Write a program that asks the user to type the value of N and computes N!.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    cout << "Enter an integer to get its factorial: ";
    cin >> n;
    int total(1);
    for (int i = n; i > 0; i--)
    {
        total *= i;
    }
    cout << n <<"! is " << total << endl;
    return 0;
}
