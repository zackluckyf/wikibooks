//
//  main.cpp
//  exercise15
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//


/* 
    Write a program that asks the user to type an integer N and that
    indicates if N is a prime number or not.
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int n;
    bool prime = true;
    cout << "Enter an integer to find out if it is prime: ";
    cin >> n;
    for (int i = 2; i < (n/2+1); i++)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    if (prime == true)
    {
        cout << n << " is prime" << endl;
    }
    else
    {
        cout << n << " is not prime" << endl;
    }
    return 0;
}
