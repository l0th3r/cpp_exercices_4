#include <iostream>
#include <list>

#include "ex01.h"

int main()
{
    std::list<int> numbers {10, 28, 483};


    std::cout << contains_at_least_two_numbers_with_8(numbers) << std::endl;

    return 0;
}
