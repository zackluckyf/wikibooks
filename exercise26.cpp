//
//  main.cpp
//  exercise26
//
//  Created by Zack Fanning on 12/5/15.
//  Copyright © 2015 Zackluckyf. All rights reserved.
//

/*
 Write a program that asks the user to input 5 sequences of characters. Then it will ask the user 
 for a character to search for and will output the maximum number of times that it occurred between 
 the 5 sequences. Example: Sequence 1: aabc Sequence 2: aaaa If the user chooses to search for 
 character 'a', the program will output "Character a occurred a maximum of 4 times" because it
 occurred 4 times in the second sequence, and only twice in the first sequence.
*/


#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, const char * argv[])
{
    cout << "5 strings will be entered then you can search to see a characters max occurences in a string " << endl;
    vector<string> userInputs;
    string userInput;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a string: ";
        cin >> userInput;
        userInputs.push_back(userInput);
    }
    char userChar;
    int max(0);
    int count;
    cout << "Enter a character to search for: ";
    cin >> userChar;
    for (int i = 0; i < 5; i++)
    {
        count = 0;
        for (int j = 0; j < userInputs[i].size(); j++)
        {
            if (userInputs[i][j] == userChar)
            {
                count++;
            }
        }
        if (count > max)
        {
            max = count;
        }
    }
    
    cout << "Character " << userChar << " occurred a maximum of " << max << " times" << endl;

    return 0;
}
