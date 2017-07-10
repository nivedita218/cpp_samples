#ifndef _GENERICPAIR_H
#define _GENERICPAIR_H

#include<algorithm>

template <typename T>
class GenericPair
{
public:
    GenericPair() : generic_pair(0) {}
    void makeKeyValue(const std::string& key, T value)
    {
        generic_pair.push_back(make_pair(key, value));

    }
    void removeKey(const std::string key)
    {
        auto it = std::find_if(generic_pair.begin(), generic_pair.end(),
                               [key](const std::pair<std::string, std::string>& item) {
                                   return key == item.first;
                               });
        if (it != generic_pair.end())
            generic_pair.erase(it);
    }

protected:
    std::vector<std::pair<std::string, T>> generic_pair;
};

#endif
