#include "GenericPair.h"
#include<string>
#include<iostream>

class StringStringPair: public GenericPair<std::string>
{
public:
    void concatenateStrings();
};

void StringStringPair::concatenateStrings()
{
    for (const auto& item : generic_pair)
    {
        std::cout << "" << item.first + item.second<<std::endl;

    }
}

