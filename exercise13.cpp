//
//  main.cpp
//  exercise13
//
//  Created by Zack Fanning on 12/3/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
    Write a program that asks the user to type 10 integers and write the 
    number of occurrence of the biggest value.
*/
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int array[10];
    cout << "Enter 10 integers" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter an integer: ";
        cin >> array[i];
    }
    int count = 1;
    int max = array[0];
    for (int i = 1; i < 10; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            count = 1;
        }
        if (array[i] == max)
        {
            count++;
        }
    }
    cout << "The max number occurred " << count << " times" << endl;
    
    return 0;
}
