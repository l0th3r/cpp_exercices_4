#include <iostream>
#include <list>
#include <string>

#include "ex01.h"
#include "ex02.h"

int main()
{
    std::list<int> num {1, 2, 3};

    print_sequence(num, [](int v){return std::to_string(v);});

    return 0;
}
