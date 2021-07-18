#include "Ch06.h"
int fact(int val)
{
    int result = 1;
    for (int i = val; i > 1; --i)
    {
        result *= i;
    }

    return result;
}
