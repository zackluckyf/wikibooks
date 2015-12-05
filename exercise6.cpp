//
//  main.cpp
//  exercise6
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/* 
 Write a program that asks the user to type an integer N
 and computes the sum of the cubes from 5^3 to N^3.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, const char * argv[]) {
    int userNum;
    int total(0);
    cout << "Enter an integer(n) to get the sum of the cubes from base 5 to n: ";
    cin >> userNum;
    for (int i = 5; i < userNum+1; i++)
    {
        total += i*i*i;
    }
    cout << "The total is " << total << endl;
    return 0;
}
