#ifndef EX02_H
#define EX02_H

#include <iostream>

template <typename C>
void print_sequence(C container)
{
    for(auto& str : container)
    {
        std::cout << str << std::endl;
    }
}

template <typename C, typename DEL>
void print_sequence(C container, DEL delegate)
{
    for(auto& str : container)
    {
        delegate(str);
        std::cout << str << std::endl;
    }
}

#endif // EX02_H
