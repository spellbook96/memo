#include <iostream>

int main(void)
{
    const int i = 42;

    auto j = i;     //int
    const auto &k = i;  //const int
    auto *p = &i;   //const int *p

    const auto j2 = i, &k2 = i;  //const int, const int &k2

    std::cout   << "j is "      << typeid(j).name()
        << "\nk is "    << typeid(k).name()
        << "\np is "    << typeid(p).name()
        << "\nj2 is "   << typeid(j2).name()
        << "\nk2 is "   << typeid(k2).name()
        << std::endl; 
    
    return 0;
}