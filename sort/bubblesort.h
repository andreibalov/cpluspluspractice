#pragma once

#include <vector>

template<typename CT>
void bubblesort(CT& container)
{
    const size_t dataSize = container.size();
    for (int i = 0; i < dataSize - 1; ++i)
    {
        for (int j = 0; j < dataSize - 1 - i; ++j)
        {
            if (container[j] > container[j + 1])
            {
                std::swap(container[j], container[j + 1]);
            }
        }
    }
}

