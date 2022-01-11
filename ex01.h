#ifndef EX01_H
#define EX01_H

#include <algorithm>
#include <string>

template <typename V>
bool is_containing_8(V val)
{
    auto str = std::to_string(val);
    return std::find(str.begin(), str.end(), '8') != str.end();
}

template <typename C>
bool contains_at_least_two_numbers_with_8(C container)
{
    return std::count_if(container.begin(), container.end(), is_containing_8<typename C::value_type>) >= 2;
}

#endif // EX01_H
