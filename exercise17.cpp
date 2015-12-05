//
//  main.cpp
//  exercise17
//
//  Created by Zack Fanning on 12/4/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to type the value of an integer N and 
 compute the N-st prime number.
*/
#include <iostream>
using namespace std;

int primes(int k);

int main(int argc, const char * argv[])
{
    int n, answer;
    cout << "Enter an integer(n) to find the n-st prime number: ";
    cin >> n;
    answer = primes(n);
    cout << "The " << n << "-st prime number is: " << answer << endl;
    return 0;
}

int primes(int k)
{
    int count = k;
        for (int j = 2; j < 1000; j++)
        {
            bool prime = true;
            for (int i = 2; i < j; i++)
            {
                if (j % i == 0)
                {
                    prime = false;
                }
            }
            if (prime == true)
            {
                count--;
            }
            if (count == 0)
            {
                return j;
            }
        }
    return 1234;
}





