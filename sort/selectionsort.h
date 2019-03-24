#pragma once

template<typename containerT>
void selectionSort(containerT& container)
{
    const auto dataSize = container.size();
    for (int i = 0; i < dataSize - 1; ++i)
    {
        auto minId = i;
        for (int j = i + 1; j < dataSize; ++j)
        {
            if (container[j] < container[minId])
            {
                minId = j;
            }
        }
        std::swap(container[i], container[minId]);
    }
}
