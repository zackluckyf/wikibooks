//
//  main.cpp
//  exercise25
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 The country A has 50M inhabitants, and its population grows 3% per year. The country B, 
 70M and grows 2% per year. Tell in how many years A will surpass B.
*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int years(0);
    int countryA = 50000000;
    int countryB = 70000000;
    double rateA = 1.03;
    double rateB = 1.02;
    while (countryA < countryB)
    {
        countryA *= rateA;
        countryB *= rateB;
        years++;
    }
    cout << "After " << years << " years Country A will have a larger population than Country B"
    << endl;
    
    
    return 0;
}
