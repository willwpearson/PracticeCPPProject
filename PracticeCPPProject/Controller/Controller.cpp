//
//  Controller.cpp
//  PracticeCPPProject
//
//  Created by Pearson, William on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <iostream>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    //vectorPractice();
    vector <int> numbers;
    
    for(int i = 0; i < 10; i++)
    {
        numbers.push_back(i);
        
        cout << numbers.at(i) << endl;
    }
    
    vector <string> words(3);
    
    words.push_back("a");
    words.push_back("b");
    words.push_back("c");
    
    for(int i = 0; i < words.size(); i++)
    {
        cout << words.at(i) << endl;
    }
}

void vectorPractice()
{
//    vector <int> numbers (10);
//
//    for(int i = 0; i < numbers.size(); i++)
//    {
//        numbers.push_back(i);
//
//        cout << numbers.at(i) << endl;
//    }
//
//    vector <string> words(3);
//
//    words.push_back("a");
//    words.push_back("b");
//    words.push_back("c");
//
//    for(int i = 0; i < words.size(); i++)
//    {
//        cout << words.at(i) << endl;
//    }
}
