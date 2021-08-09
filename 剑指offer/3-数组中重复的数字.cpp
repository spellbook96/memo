#include <iostream>
#include <vector>
using std::vector;

int swap(vector<int> &numbers, int a, int b)
{
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
    return 0;
}

int duplicate(vector<int> &numbers)
{
    int size = numbers.size();
    for (int i = 0; i < size; ++i)
    {
        while (numbers[i] != i)
        {
            if(numbers[i]==numbers[numbers[i]])
                return numbers[i];
            swap(numbers, i, numbers[i]);
        }
    }
    return -1;
}

int main()
{
    vector<int> iv = {1, 2, 3, 4, 6, 7, 8, 8, 8};
    std::cout << duplicate(iv) << std::endl;
    return 0;
}