#include "quicksort.h"
#include "bubblesort.h"
#include <algorithm>

bool orderTest()
{
    std::vector<int> data = { 2,6,4,5,1,3,7,9,8,10,22,45,77 };
    CustomAlgorithn::quicksort(data, 0, data.size() - 1);
    int prev = data.front();
    for (auto& value : data)
    {
        if (prev > value)
        {
            return false;
        }
        prev = value;
    }
    return true;
}

int main(int argc, char** argv)
{
    bool bubbleResult = orderTest();

}