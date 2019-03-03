#pragma once

#include <vector>

namespace CustomAlgorithn
{

template<typename T>
int partition(std::vector<T>& data, int left, int right)
{
    T pivot = data[right];
    int pleft = left - 1;
    int pright = right - 1;
    for (int i = left; i <= pright; ++i)
    {
        if (data[i] <= pivot)
        {
            pleft++;
            std::swap(data[i], data[pleft]);
        }
    }
    std::swap(data[pleft + 1], data[right]);
    return pleft + 1;
}

template<typename T>
void quicksort(std::vector<T>& data, int left, int right)
{
    if (left > right)
    {
        return;
    }
    else
    {
        int p = partition(data, left, right);
        quicksort(data, left, p - 1);
        quicksort(data, p + 1, right);
    }
}

}