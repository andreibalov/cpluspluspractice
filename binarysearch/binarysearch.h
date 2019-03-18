#pragma once

template<typename containerT>//, typename valueT>
size_t bsearch(const containerT& container, const typename containerT::value_type& value)//const valueT& value)
{
    size_t left = 0;
    size_t right = container.size();
	
    while (left < right)
    {
		auto mid = left + (right - left) / 2;
        auto& data = container[mid];
		
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

