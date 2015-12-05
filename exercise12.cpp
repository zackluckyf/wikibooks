//
//  main.cpp
//  exercise12
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type an integer N and compute u(N) defined with:
 u(0)=3
 u(1)=2
 u(n)=n*u(n-1)+(n+1)*u(n-2)+n
*/

#include <iostream>
using namespace std;

long double calculation(long double n);

int main(int argc, const char * argv[])
{
    long double userNum, answer;
    cout << "Enter an integer(n) to compute u(n): ";
    cin >> userNum;
    answer = calculation(userNum);
    cout << "u(" << userNum << ") = " << answer << endl;
    return 0;
}

long double calculation(long double n)
{
    if (n == 0)
    {
        return 3;
    }
    if (n == 1)
    {
        return 2;
    }
    else
    {
        return n * calculation(n-1) + (n+1) * calculation(n-2) + n;
    }
}