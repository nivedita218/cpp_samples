#include "GenericPair.h"
#include<string>
#include<iostream>

class StringIntPair: public GenericPair<int>
{
public:
    void displayIntandString();
};

void StringIntPair::displayIntandString()
{
    for (const auto& item : generic_pair)
    {
        std::cout << item.first << item.second<<std::endl;

    }
}

