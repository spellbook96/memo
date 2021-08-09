#include <iostream>
#include <vector>
using std::vector;

int swap(vector<int> &numbers,int a, int b)
{

    if (a==b)
        return 0;
    if (numbers[a]==numbers[b])
        return 1;
    int temp = numbers[a];
    numbers[a] = numbers[b];
    numbers[b] = temp;
    return 0;
}

int duplicate(vector<int> &numbers)
{
    int size = numbers.size();
    int result = 0;
    for (int i = 0; i < size; ++i)
    {
        if(i!=numbers[i])
            if (swap(numbers,i,int(numbers[i])))
                return numbers[i];
            else
                i=-1;
    }
    return -1;
}


int main()
{
    vector<int> iv ={1,2,3,4,6,7,8,8,8};
    std::cout << duplicate(iv) << std::endl;
    return 0;
}