//
//  main.cpp
//  exercise8
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type an integer N and compute u(N) defined with:
 u(0)=1
 u(1)=1
 u(n+1)=u(n)+u(n-1)
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int calculation(int n);

int main(int argc, const char * argv[])
{
    int userNum;
    cout << "Enter an integer: ";
    cin >> userNum;
    int answer = calculation(userNum);
    cout << "u(" << userNum << ") = " << answer << endl;
    return 0;
}

int calculation(int n)
{
    if (n == 0 or n == 1)
    {
        return 1;
    }
    else
    {
        return (calculation(n-1) + calculation(n-2));
    }
}