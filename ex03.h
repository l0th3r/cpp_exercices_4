#ifndef EX03_H
#define EX03_H

#include <iostream>

#include <algorithm>
#include <string>
#include <vector>
#include <map>

template<typename V>
std::vector<V> map_get_case_insensitive(const std::map<std::string, V> map, const std::string query)
{
    std::vector<V> result;
    std::string lquery = to_lowercase(query);

    for(const auto& [key, value] : map)
    {
        if(to_lowercase(key) == lquery)
            result.push_back(value);
    }

    return result;
}

inline std::string to_lowercase(const std::string str)
{
    std::string res = "";
    for(auto& c : str) { res += std::tolower(c); }
    return res;
}

#endif // EX03_H
