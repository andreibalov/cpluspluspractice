#pragma once

template<typename containerT, typename valueT>
int bsearch(const containerT& container, const valueT& value)
{
    size_t left = 0;
    size_t right = container.size();
	
    while (left < right)
    {
		int mid = left + (right - left) / 2;
		valueT& data = container[mid];
		
		if(data == value)
			return mid;
		
		if(data > value)
		{
			right = mid;
		}
		else
		{
			left = mid + 1;
		}
    }
	return -1;
}

