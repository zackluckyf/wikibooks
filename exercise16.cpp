//
//  main.cpp
//  exercise16
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
    Write a program that asks the user to type an integer N and that writes 
    the number of prime numbers lesser or equal to N.
 */

#include <iostream>
using namespace std;

int primes(int k);

int main(int argc, const char * argv[])
{
    int n, num;
    cout << "Enter an integer(n) to find out how many prime numbers exist that are <= n: ";
    cin >> n;
    num = primes(n);
    cout << "There are " << num << " primes smaller than " << n << endl;
    return 0;
}

int primes(int k)
{
    if (k <= 0)
    {
        return 0;
    }
    if (k == 1)
    {
        return 0;
    }
    else
    {
        bool prime = true;
        for (int i = 2; i < (k/2+1); i++)
        {
            if (k % i == 0)
            {
                prime = false;
            }
        }
        if (prime == true)
        {
            return 1 + primes(k-1);
        }
        else return primes(k-1);
    }
}









