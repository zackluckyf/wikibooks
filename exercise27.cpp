//
//  main.cpp
//  exercise27
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type a random number. Write in output
 if this number is a prime number or not. Write,by which numbers can your number be divided.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    int userNum;
    vector<int> factors;
    cout << "Enter an integer(n) to find out whether it is prime or not and what its factors are: ";
    cin >> userNum;
    bool prime = true;
    for (int i = 2; i < userNum/2 +1; i++)
    {
        if (userNum % i == 0)
        {
            prime = false;
        }
    }
    if (prime == true)
    {
        cout << userNum << " is prime and its factors are: " << 1 << " and " << userNum << endl;
    }
    else
    {
        for (int i = 2; i < userNum/2 +1; i++)
        {
            if (userNum % i == 0)
            {
                factors.push_back(i);
            }
        }
        cout << userNum << " is  not prime and its factors are: " << 1 << ", ";
        for (int i = 0; i < factors.size(); i++)
        {
            cout << factors[i] << ", ";
        }
        cout << "and " << userNum << endl;
    }

    return 0;
}
















