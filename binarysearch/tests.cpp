#include "tests.h"
#include "binarysearch.h"

#include <iostream>
#include <vector>
#include <cassert>

void BinarySearchTests::runTests() const
{
    smokeTest();
}

void BinarySearchTests::smokeTest() const 
{
    std::vector<int> testVector = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
    auto position = bsearch(testVector, 3);
    assert(position == 3);

    //if (position == 2)
    //    return true;
    //else
    //    return false;
}