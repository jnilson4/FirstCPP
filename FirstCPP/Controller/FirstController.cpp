//
//  FirstController.cpp
//  FirstCPP
//
//  Created by Nilson, Jake on 1/23/17.
//  Copyright © 2017 Nilson. All rights reserved.
//

#include <iostream>
#include "FirstController.h"

using namespace std;

void FirstController :: usePointerToChange(int * pointedTo)
{
    *pointedTo = 2 * (12398785);
}

void FirstController :: start()
{
    cout << "words here please :D" << endl;
    
    int myNumber = 9;
    int * numberPointer = &myNumber;
    
    cout << "Starting with: " << myNumber << endl;
    useNumbers(myNumber);
    cout << "Look no change XD: " << myNumber << endl;
    
    cout << "Changing a value" << endl;
    myNumber = impactNumber();
    cout << "See - impacted " << myNumber << endl;
    
    cout << "Chgangin with a pointer" << endl;
    usePointerToChange(numberPointer);
    cout << "See how the number has been changed: " << myNumber << endl;
}

void FirstController :: specialOutput()
{
//    cout << "Hi how old are you?" << endl;
//    int age;
//    cin >> age;
//    cout << "you typed in " << age << endl;
//    cout << "type in your name" << endl;
//    string name;
//    cin >> name;
//    cout << "your name is " << name << " wow cool - :P" << endl;
//    cin.ignore();
//    cin >> name;
//    cout << name;
//    cout << "type your name and age" << endl;
//    cin >> name >> age;
//    cout << "you typed " << name << " and " << age << endl;
//    cin.ignore();
//    cout << "Type in your full name" << endl;
//    getline(cin, name);
//    cout << name << endl;
//    cout << "What is your favorite color?" << endl;
//    string color;
//    cin >> color;
//    cout << "Your favorite color is: " << color << endl;
}

void FirstController :: useNumbers(int suppliedNumber)
{
    cout << "I was given: " << suppliedNumber << endl;
    suppliedNumber = (suppliedNumber * 3 + 324564652) / 42;
    cout << "It is now: " << suppliedNumber << endl;
}

int FirstController :: impactNumber()
{
    return 8765432;
}
