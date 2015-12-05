//
//  main.cpp
//  exercise23
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Request the user to type positive numbers, or to stop by typing a 
 number smaller than 1. Print the average.
 */

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    double userNum(1.0);
    vector<double> userNums;
    cout << "Enter positive numbers, average prints upon a number smaller than 1 being entered"
    << endl;
    while (userNum >= 1.0)
    {
        cout << "Enter a number: ";
        cin >> userNum;
        if (userNum >= 1.0)
        {
            userNums.push_back(userNum);
        }
    }
    double total(0.0);
    for (int i = 0; i < userNums.size(); i++)
    {
        total += userNums[i];
    }
    double average = total / userNums.size();
    cout << "The average is: " << average << endl;
    
    return 0;
}
