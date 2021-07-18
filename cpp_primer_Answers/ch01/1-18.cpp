#include <iostream>
int main()
{
    int currVal = 0, val = 0;
    if (std::cin >> currVal)
    {
        int cnt = 1; 
        while (std::cin >> val)
        {                       // read the remaining numbers
            if (val == currVal) // if the values are the same
                ++cnt;          // add 1 to cnt
            else
            { // otherwise, print the count for the previous value
                std::cout << currVal << " occurs "
                          << cnt << " times" << std::endl;
                currVal = val; // remember the new value
                cnt = 1;       // reset the counter
            }
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << cnt << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}