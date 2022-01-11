#ifndef EX04_H
#define EX04_H

#include <algorithm>

template<typename It>
bool is_palindrome(It begin, It end)
{
    bool result = true;
    bool reached_mid = false;

    auto left = begin;
    auto right = --end;

    while(left != right && reached_mid == false && result == true)
    {
       if(*left != *right)
            result = false;

        left++;

        if(left == right)
            reached_mid = true;

        right--;
    }

    return result;
}

#endif // EX04_H
