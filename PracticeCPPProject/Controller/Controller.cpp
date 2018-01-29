//
//  Controller.cpp
//  PracticeCPPProject
//
//  Created by Pearson, William on 1/29/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

using namespace std;

Controller :: Controller()
{
    
}

void Controller :: start()
{
    vectorPractice();
}

void vectorPractice()
{
    vector <int> numbers (10);
    
    vector <string> words(3);
    
    for(int i = 0; i < numbers.size(); i++)
    {
        numbers.push_back(i);
        
        cout << numbers.at(i) << endl;
    }
    
    words.push_back("a");
    words.push_back("b");
    words.push_back("c");
    
    for(int i = 0; i < words.size(); i++)
    {
        cout << words.at(i) << endl;
    }
}
