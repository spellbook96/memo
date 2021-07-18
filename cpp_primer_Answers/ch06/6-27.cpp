#include <iostream>
#include <initializer_list>
int sum(std::initializer_list<int> const &lst)
{
    int result = 0;
    for (const auto &n : lst)
        result += n;
    return result;
}
int main()
{
    std::cout << sum({1,2,3}) << std::endl;
    return 0;
}