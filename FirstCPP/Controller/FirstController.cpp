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

void FirstController :: start()
{
    cout << "words here please :D" << endl;
    specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "Hi how old are you?" << endl;
    int age;
    cin >> age;
    cout << "you typed in " << age << endl;
    cout << "type in your name" << endl;
    string name;
    cin >> name;
    cout << "your name is " << name << " wow cool - :P" << endl;
    cin.ignore();
    cin >> name;
    cout << name;
    cout << "type your name and age" << endl;
    cin >> name >> age;
    cout << "you typed " << name << " and " << age << endl;
    cin.ignore();
    cout << "Type in your full name" << endl;
    getline(cin, name);
    cout << name << endl;
}
