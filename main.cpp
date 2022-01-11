#include <iostream>
#include <map>
#include <vector>

#include "ex01.h"
#include "ex02.h"
#include "ex03.h"



int main()
{
    std::map<std::string, int> numbers {
        {"One", 1},
        {"Two", 2},
        {"tWo", 33},
        {"Fouur", 432},
        {"ThRee", 43444},
        {"tHree", 77},
        {"Hsdd", 454},
        {"threE", 43},
        {"Hello", 988},
        {"thrEE", 344},
    };


    for(int& v : map_get_case_insensitive(numbers, "two"))
    {
        std::cout << v << std::endl;
    }

    return 0;
}
