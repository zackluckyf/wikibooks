//
//  main.cpp
//  exercise7
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type an integer N and compute u(N) defined with :
 u(0)=3
 u(n+1)=3*u(n)+4
*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int calculation(int n);

int main(int argc, const char * argv[]) {
    int userNum;
    cout << "Enter an integer n: ";
    cin >> userNum;
    int result;
    result = calculation(userNum);
    cout << "u(" << userNum << ") = " << result << endl;
    return 0;
}

int calculation(int n)
{
    if (n == 0)
    {
        return 3;
    }
    else
    {
        return (3 * (n-1) + 4);
    }
}