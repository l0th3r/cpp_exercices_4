#include <iostream>
#include <list>

#include "ex01.h"
#include "ex02.h"
#include "ex03.h"
#include "ex04.h"

int main()
{
    std::list<int> nb {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};

    std::cout << is_palindrome(nb.begin(), nb.end()) << std::endl;

    return 0;
}
